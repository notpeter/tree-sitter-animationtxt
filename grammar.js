/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "animationtxt",
  extras: (_) => [],
  rules: {
    document: ($) => seq(/(\r?\n)*/, repeat(choice($.statement, /(\r?\n)+/, "\0"))),
    statement: ($) => choice($.loopCount, $.frames, $.introFrames),

    loopCount: ($) => seq("loopCount", optional(/ +/), "=", optional(/ +/), $.number),
    frames: ($) => seq("frames", optional(/ +/), "=", optional(/ +/), $.framelist),
    introFrames: ($) => seq("introFrames", optional(/ +/), "=", optional(/ +/), $.framelist),

    framelist: ($) =>
      seq(choice($.number, $.frameRepeat), repeat(seq(/ *, */, choice($.number, $.frameRepeat)))),
    frameRepeat: (_) => {
      return token(seq(/[1-9][0-9]*/, token.immediate("x"), token.immediate(/[1-9][0-9]*/)));
    },
    number: (_) => /[1-9][0-9]*/, // all our numbers are positive integers
  },
});
