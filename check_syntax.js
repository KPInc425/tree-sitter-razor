#!/usr/bin/env node
'use strict';

/*
check_syntax.js

Compile (parse) the local grammar.js file using vm.Script to detect and display
JavaScript syntax errors with helpful context (file, line, column, surrounding lines).

Usage:
  node check_syntax.js
  node check_syntax.js /path/to/grammar.js

This tool only parses/compiles the source; it does NOT execute the module. That
makes it safe to detect syntax/parse issues without running the grammar file.
*/

const fs = require('fs');
const path = require('path');
const vm = require('vm');

function print(...args) {
  console.log(...args);
}

function printErr(...args) {
  console.error(...args);
}

function usage() {
  print('Usage: node check_syntax.js [path/to/grammar.js]');
  print('If no path is provided, ./grammar.js relative to this script is used.');
}

function extractLineColFromStack(stack) {
  // Attempt to extract the first occurrence of ":line:col" from the stack.
  // Example stack line: "    at new Script (vm.js:79:7)"
  if (!stack) return null;
  const re = /:(\d+):(\d+)\)?$/m;
  const m = stack.match(re);
  if (m) {
    return { line: parseInt(m[1], 10), column: parseInt(m[2], 10) };
  }
  // Try alternative form: "SyntaxError: Unexpected token (12:5)"
  const re2 = /\((\d+):(\d+)\)/;
  const m2 = stack.match(re2);
  if (m2) {
    return { line: parseInt(m2[1], 10), column: parseInt(m2[2], 10) };
  }
  return null;
}

function showContext(sourceText, lineNumber, column, context = 4) {
  const lines = sourceText.split(/\r?\n/);
  const total = lines.length;
  const idx = Math.max(0, Math.min(total - 1, lineNumber - 1)); // 0-based
  const start = Math.max(0, idx - context);
  const end = Math.min(total - 1, idx + context);

  const pad = String(end + 1).length;
  const out = [];

  for (let i = start; i <= end; i++) {
    const ln = i + 1;
    const prefix = (ln === lineNumber ? '>' : ' ');
    const num = String(ln).padStart(pad, ' ');
    const text = lines[i].replace(/\t/g, '    ');
    out.push(`${prefix} ${num} | ${text}`);
    if (ln === lineNumber) {
      // caret line
      const col = Math.max(0, column - 1);
      // create marker; ensure we don't overflow for very long columns
      const marker = ' '.repeat(col + pad + 4) + '^';
      out.push(marker);
    }
  }
  return out.join('\n');
}

function main() {
  const argv = process.argv.slice(2);
  if (argv.length > 1) {
    usage();
    process.exit(2);
  }

  const grammarPath = argv[0]
    ? path.resolve(process.cwd(), argv[0])
    : path.resolve(__dirname, 'grammar.js');

  if (!fs.existsSync(grammarPath)) {
    printErr(`ERROR: grammar file not found: ${grammarPath}`);
    process.exit(2);
  }

  let source;
  try {
    source = fs.readFileSync(grammarPath, 'utf8');
  } catch (e) {
    printErr('ERROR: failed to read grammar file:', e && e.message ? e.message : e);
    process.exit(2);
  }

  // Attempt to compile the source using vm.Script. This will throw on syntax errors.
  try {
    // Use the filename option so errors reference the real file
    new vm.Script(source, { filename: grammarPath });
    print(`OK: syntax parse succeeded for ${grammarPath}`);
    process.exit(0);
  } catch (err) {
    printErr(`Syntax error while parsing ${grammarPath}:`);
    // Print the error message
    if (err && err.message) {
      printErr(err.message);
    } else {
      printErr(String(err));
    }

    // Try to extract line/column from different error properties
    let line = null;
    let column = null;

    if (typeof err.lineNumber === 'number') {
      line = err.lineNumber;
    }
    if (typeof err.line === 'number') {
      line = err.line;
    }
    if (typeof err.columnNumber === 'number') {
      column = err.columnNumber;
    }
    if (typeof err.column === 'number') {
      column = err.column;
    }

    const fromStack = extractLineColFromStack(err.stack || err.message);
    if (!line && fromStack) line = fromStack.line;
    if (!column && fromStack) column = fromStack.column;

    if (line) {
      printErr('');
      printErr(`Location: ${grammarPath}:${line}${column ? ':' + column : ''}`);
      printErr('');
      const ctx = showContext(source, line, column || 1, 6);
      printErr(ctx);
      printErr('');
    } else {
      printErr('Could not determine error line/column from error object/stack.');
      printErr('');
      // Print first 80 chars of file for quick view
      printErr('File preview (first 200 chars):');
      printErr(source.slice(0, 200).replace(/\r?\n/g, '\\n'));
      printErr('');
    }

    // Print stack for deeper debugging
    if (err.stack) {
      printErr('Stack trace:');
      printErr(err.stack);
    }

    printErr('');
    printErr('Hints:');
    printErr('- Look at the indicated line/column for stray characters, unmatched braces, or unterminated strings.');
    printErr('- If the grammar file uses the tree-sitter DSL, remember that the DSL is executed at require time when');
    printErr('  generating a parser; this script only parses the JS syntax and does not execute module code.');
    printErr('- If you recently edited the file with a tool that may have injected non-UTF8 bytes, verify file encoding (UTF-8).');

    process.exit(1);
  }
}

main();
