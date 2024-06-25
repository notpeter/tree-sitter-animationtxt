/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "playdateanimation",
  rules: {
    animationtxt: ($) =>
      repeat(choice(/(\r?\n)/, $.loopCount, $.frames, $.introFrames)),
    loopCount: ($) =>
      seq(
        "loopCount",
        optional(/ +/),
        "=",
        optional(/ +/),
        $.positiveInt,
        optional(/ +/),
        /(\r?\n)/,
      ),
    frames: ($) =>
      seq(
        "frames",
        optional(/ +/),
        "=",
        optional(/ +/),
        $.framelist,
        optional(/ +/),
        /(\r?\n)/,
      ),
    introFrames: ($) =>
      seq(
        "introFrames",
        optional(/ +/),
        "=",
        optional(/ +/),
        $.framelist,
        optional(/ +/),
        /(\r?\n)/,
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
  },
  extras: (_) => [],
});
