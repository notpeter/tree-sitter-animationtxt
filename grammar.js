/// <reference types="tree-sitter-cli/dsl" />

module.exports = grammar({
  name: "playdateanimation",
  rules: {
    animationtxt: ($) => repeat(choice($.loopCount, $.frames, $.introFrames)),
    loopCount: ($) => seq("loopCount", "=", $.integer, $.newline),
    frames: ($) => seq("frames", "=", $.framelist, $.newline),
    introFrames: ($) => seq("introFrames", "=", $.framelist, $.newline),
    framelist: ($) => seq($.frameLiteral, repeat(seq(",", $.frameLiteral))),
    frameLiteral: ($) => {
      const positiveInt = /[1-9][0-9]*/;
      const frameRepeat = seq(
        positiveInt, // frameId
        token.immediate("x"),
        token.immediate(positiveInt), // frameCount
      );
      return token(choice(prec(1, frameRepeat), prec(2, positiveInt)));
    },
    frameId: ($) => $.positiveInt,
    frameCount: ($) => $.positiveInt,
    positiveInt: (_) => /[1-9][0-9]*/,
    integer: (_) => /[0-9]+/,
    newline: (_) => /(\r?\n)/,
  },
});
