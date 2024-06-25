/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "playdateanimation",
  rules: {
    animationtxt: ($) => repeat(choice($.loopCount, $.frames, $.introFrames)),
    loopCount: ($) =>
      seq(
        "loopCount",
        optional(/ +/),
        "=",
        optional(/ +/),
        $.positiveInt,
        optional(/ +/),
        $.newline,
      ),
    frames: ($) =>
      seq(
        "frames",
        optional(/ +/),
        "=",
        optional(/ +/),
        $.framelist,
        optional(/ +/),
        $.newline,
      ),
    introFrames: ($) =>
      seq(
        "introFrames",
        optional(/ +/),
        "=",
        optional(/ +/),
        $.framelist,
        optional(/ +/),
        $.newline,
      ),
    framelist: ($) =>
      seq(
        choice($.frameNonRepeat, $.frameRepeat),
        repeat(
          seq(",", optional(/ +/), choice($.frameNonRepeat, $.frameRepeat)),
        ),
      ),
    frameNonRepeat: ($) => token(/[1-9][0-9]*/),
    frameRepeat: (_) => {
      return token(
        seq(
          /[1-9][0-9]*/,
          token.immediate("x"),
          token.immediate(/[1-9][0-9]*/),
        ),
      );
    },
    positiveInt: (_) => /[1-9][0-9]*/,
    newline: (_) => /(\r?\n)/,
    w: (_) => / +/,
  },
  extras: (_) => [],
});
