#!/usr/bin/env node
"use strict";

/**
 * dump_bytes.js
 *
 * Simple helper to dump the beginning bytes and a short text preview of `grammar.js`.
 * Useful when debugging "failed to load grammar" errors to check for BOMs, stray bytes,
 * non-UTF-8 content, or accidental path/line prefixes.
 *
 * Usage:
 *   node dump_bytes.js
 *
 * Output:
 *   - absolute path to grammar.js
 *   - file size in bytes
 *   - first N bytes (hex, spaced)
 *   - a UTF-8 text preview of the first M bytes (with non-printable bytes escaped)
 *   - the first K lines of the file (human-friendly)
 */

const fs = require("fs");
const path = require("path");

const grammarPath = path.resolve(__dirname, "grammar.js");
const HEX_COUNT = 64;     // show first 64 bytes in hex
const PREVIEW_BYTES = 512; // show up to first 512 bytes as a UTF-8 preview
const PREVIEW_LINES = 60; // show this many lines as text preview

function hexWithSpaces(buf) {
  return Array.from(buf).map((b) => b.toString(16).padStart(2, "0")).join(" ");
}

function escapeNonPrintable(s) {
  // Replace control characters (except newline, tab, carriage return) with \xNN
  return s.replace(/[\x00-\x09\x0B\x0C\x0E-\x1F\x7F-\x9F]/g, (c) =>
    "\\x" + c.charCodeAt(0).toString(16).padStart(2, "0")
  );
}

function safeSlice(buf, n) {
  if (buf.length <= n) return Buffer.from(buf);
  return Buffer.from(buf.slice(0, n));
}

function printHeader() {
  console.log("");
  console.log("=== dump_bytes.js: grammar.js debug dump ===");
  console.log("");
}

function printFailure(msg) {
  console.error("ERROR:", msg);
  process.exit(2);
}

(function main() {
  printHeader();

  if (!fs.existsSync(grammarPath)) {
    printFailure(`grammar.js not found at expected path: ${grammarPath}`);
  }

  let stat;
  try {
    stat = fs.statSync(grammarPath);
  } catch (e) {
    printFailure(`Failed to stat file: ${e && e.message ? e.message : e}`);
  }

  console.log("grammar.js path:", grammarPath);
  console.log("file size (bytes):", stat.size);
  console.log("");

  let buffer;
  try {
    buffer = fs.readFileSync(grammarPath);
  } catch (e) {
    printFailure(`Failed to read file: ${e && e.message ? e.message : e}`);
  }

  const firstHex = safeSlice(buffer, HEX_COUNT);
  console.log(`first ${Math.min(HEX_COUNT, buffer.length)} bytes (hex):`);
  console.log(hexWithSpaces(firstHex));
  console.log("");

  const preview = safeSlice(buffer, PREVIEW_BYTES).toString("utf8", 0, Math.min(buffer.length, PREVIEW_BYTES));
  console.log(`first ${Math.min(PREVIEW_BYTES, buffer.length)} bytes (UTF-8 preview, non-printables escaped):`);
  console.log(escapeNonPrintable(preview));
  console.log("");

  // Also print the first PREVIEW_LINES lines for quick human view
  try {
    const text = buffer.toString("utf8");
    const lines = text.split(/\r?\n/).slice(0, PREVIEW_LINES);
    console.log(`first ${lines.length} lines of grammar.js:`);
    lines.forEach((ln, idx) => {
      const lineNum = String(idx + 1).padStart(3, " ");
      console.log(`${lineNum}: ${ln}`);
    });
    if (text.split(/\r?\n/).length > PREVIEW_LINES) {
      console.log(`... (file continues, only first ${PREVIEW_LINES} lines shown)`);
    }
  } catch (e) {
    console.log("Could not render file as UTF-8 text preview:", e && e.message ? e.message : e);
  }

  console.log("");
  console.log("If the file begins with an unexpected path prefix, BOM, or non-UTF-8 bytes,");
  console.log("inspect the hex output above. If you want me to help interpret it, paste");
  console.log("the output here and I'll explain what it indicates.");
  console.log("");
})();
