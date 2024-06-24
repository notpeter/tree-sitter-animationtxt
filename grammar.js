module.exports = grammar({
  name: "playdate-animation",
  rules: {
    animationtxt: ($) =>
      seq($.loopCount, $._newline, $.frames, $._newline, $.introFrames),
    loopCount: ($) => seq("loopCount", "=", $._integer),
    frames: ($) => seq("frames", "=", $._frameId, repeat(seq(",", $._frameId))),
    introFrames: ($) =>
      seq("introFrames", "=", $._frameId, repeat(seq(",", $._frameId))),

    _integer: (_) => /[0-9]+/,
    _newline: (_) => /\r?\n/,
    _frameId: (_) =>
      choice(
        $._integer,
        seq($._integer, token.immediate("x"), token.immediate($._integer)),
      ),
  },
  extras: (_) => [" "],
});
