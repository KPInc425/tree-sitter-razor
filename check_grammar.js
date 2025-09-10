#!/usr/bin/env node
"use strict";

/*
 * check_grammar.js
 *
 * This helper defines a mock global `grammar` function before requiring the project's
 * `grammar.js`. The mock intentionally throws a descriptive error when invoked so that
 * requiring `grammar.js` surfaces a clear, controlled exception at the moment the DSL
 * is executed. This is useful to determine whether `grammar.js` actually runs far
 * enough to call `grammar(...)` (which indicates the file parsed as valid JavaScript
 * up to that point) versus failing earlier with syntax/parse errors.
 *
 * Usage:
 *   node check_grammar.js
 *
 * Behavior:
 * - Defines a global `grammar` function that will log a short summary of its argument
 *   and then throw a dedicated Error so you can see that the DSL invocation happened.
 * - Attempts to require('./grammar.js') and prints any thrown error stack.
 *
 * Notes:
 * - If `require('./grammar.js')` fails before calling `grammar(...)`, you'll see the
 *   original parse/syntax error stack. If it reaches `grammar(...)`, you'll see the
 *   mock's thrown error and a short summary of the provided value.
 */

const path = require("path");
const fs = require("fs");

const grammarPath = path.resolve(__dirname, "grammar.js");

console.log("");
console.log("=== tree-sitter-razor: grammar sanity check (mock grammar) ===");
console.log(`Resolving grammar at: ${grammarPath}`);
console.log("");

if (!fs.existsSync(grammarPath)) {
  console.error("ERROR: grammar.js not found at expected path:", grammarPath);
  process.exit(2);
}

// Provide a mock `grammar` function in the global scope as well as lightweight DSL helpers.
// The real tree-sitter DSL provides these helpers. Adding minimal stubs lets us require
// grammar.js to surface syntax/runtime errors while avoiding crashes when the file uses
// the DSL primitives.
global.token = function (x) {
  return x;
};
// Provide token.immediate used by some grammars
global.token.immediate = function (pattern) {
  return { type: "IMMEDIATE_TOKEN", pattern: pattern };
};

global.prec = function (a, b) {
  // prec can be used either as prec(value, node) or prec(node)
  if (typeof b === "undefined") return a;
  return b;
};

global.alias = function (x, y) {
  return x;
};
global.seq = function () {
  // return array to represent sequence structure for basic sanity checks
  return Array.prototype.slice.call(arguments);
};
global.choice = function () {
  return Array.prototype.slice.call(arguments);
};
global.repeat = function (x) {
  return x;
};
global.repeat1 = function (x) {
  return x;
};
global.optional = function (x) {
  return x;
};

// The real tree-sitter DSL provides many more helpers; these minimal stubs are sufficient
// to allow grammar.js to execute and call `grammar(...)` without throwing from missing helpers.
// Keep the mock grammar behavior the same as before: provide a readable summary and throw
// a controlled error when `grammar(...)` is invoked so that we can tell the file executed.
global.grammar = function mockGrammar(definition) {
  // Print a brief, safe summary of the argument without trying to JSON.stringify the whole object.
  let summary = "<unable to inspect>";
  try {
    if (typeof definition === "object" && definition !== null) {
      const keys = Object.keys(definition).slice(0, 10);
      summary = `object with keys: [${keys.join(", ")}]`;
    } else {
      summary = `type: ${typeof definition}`;
    }
  } catch (e) {
    // ignore inspection errors
  }

  const msgLines = [
    "Mock `grammar()` invoked.",
    "This indicates that grammar.js executed successfully up to the point it called `grammar(...)`.",
    `Summary: ${summary}`,
    "",
    "Intentionally throwing to show a controlled error where the DSL is invoked.",
    "If you see an earlier syntax error instead of this message, there is likely a parse/syntax issue before the DSL invocation.",
  ];

  const err = new Error(msgLines.join("\n"));
  // Attach some helpful metadata for users/debuggers.
  err.mockGrammar = true;
  err.definitionSummary = summary;
  throw err;
};

try {
  // Remove from require cache if present so repeated runs reflect the latest file.
  delete require.cache[require.resolve(grammarPath)];

  // Now require the grammar file. If it contains syntax errors, Node will throw before
  // our mock `grammar` gets invoked. If it reaches the DSL call, our mock will throw.
  require(grammarPath);

  // If we get here, the grammar file executed and did NOT call the global `grammar` function.
  // That's possible if the file uses a different approach or conditionally defines module.exports.
  console.log("");
  console.log(
    "NOTE: grammar.js was required successfully and did not call the global `grammar()` mock.",
  );
  console.log(
    "It may be exporting directly without using the DSL or calling `grammar` under a condition.",
  );
  process.exit(0);
} catch (e) {
  console.error("");
  console.error("=== Error while requiring grammar.js ===");
  if (e && e.stack) {
    console.error(e.stack);
  } else {
    console.error(String(e));
  }

  console.error("");
  console.error(
    "If the stack trace shows our mock `grammar()` invocation message, then grammar.js executed to",
  );
  console.error(
    "the DSL call. If you see a syntax/parse error stack (e.g. Unexpected token), fix the grammar.js",
  );
  console.error(
    "syntax before running the generator. If you need help interpreting the stack, paste it here.",
  );
  process.exit(1);
}
