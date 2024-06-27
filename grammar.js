/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "playdateanimation",
  extras: (_) => [],
  rules: {
    document: ($) => seq(/(\r?\n)*/, repeat($.statement)),
    statement: ($) =>
      seq(
        choice($.loopCount, $.frames, $.introFrames),
        optional(/ +/),
        choice($._eof, /(\r?\n)/),
      ),
    assignment: ($) => choice($.loopCount, $.frames, $.introFrames),

    loopCount: ($) =>
      seq("loopCount", optional(/ +/), "=", optional(/ +/), $.number),
    frames: ($) =>
      seq("frames", optional(/ +/), "=", optional(/ +/), $.framelist),
    introFrames: ($) =>
      seq("introFrames", optional(/ +/), "=", optional(/ +/), $.framelist),

    framelist: ($) =>
      seq(
        choice($.number, $.frameRepeat),
        repeat(seq(/ *, */, choice($.number, $.frameRepeat))),
      ),
    frameRepeat: (_) => {
      return token(
        seq(
          /[1-9][0-9]*/,
          token.immediate("x"),
          token.immediate(/[1-9][0-9]*/),
        ),
      );
    },
    equals: ($) => seq(optional(/ +/), "=", optional(/ +/)),
    number: (_) => /[1-9][0-9]*/, // all our numbers are positive integers
    _eof: ($) => "\0",
  },
});
