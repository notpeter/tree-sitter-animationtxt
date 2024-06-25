/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "playdateanimation",
  rules: {
    animationtxt: ($) =>
      seq($.loopCount, $.newline, $.frames, $.newline, $.introFrames),
    loopCount: (_) => seq("loopCount", "=", /[0-9]+/),
    frames: ($) => seq("frames", "=", $.frameId, repeat(seq(",", $.frameId))),
    introFrames: ($) =>
      seq("introFrames", "=", $.frameId, repeat(seq(",", $.frameId))),

    frameId: (_) =>
      choice(seq(/[0-9]+/, token.immediate("x"), token.immediate(/[0-9]+/))),
    newlines: (_) => /(\r?\n)+/,
  },
  extras: (_) => [" "],
});
