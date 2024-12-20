const NEWLINE = /\r?\n/;
const ANY_TEXT = /[^\r\n]+?/
const WHITESPACE = /[\f\v ]+/
const COMMENT_PREFIX = "JJ:"
const SCISSORS = /JJ: ignore-rest\r?\n/

module.exports = grammar({
  name: 'jjdescription',
  extras: ($) => [],

  // conflicts: ($) => [
  //   [$.change_comment, $.text_comment]
  // ],

  rules: {
    document: ($) =>
      repeat(
        choice(
          $.scissors,
          seq($.text, NEWLINE),
          seq($.comment, NEWLINE),
          NEWLINE,
        ),
      ),

    change: ($) =>
      seq(
        field('type', choice("A", "M", "D")),
        " ",
        $.filepath,
      ),

    filepath: ($) =>
      ANY_TEXT,

    scissors: ($) =>
      seq(
        alias(SCISSORS, $.comment),
        alias(repeat(seq(ANY_TEXT, NEWLINE)), $.scissors_inner),
        alias(choice(
          seq("JJ: describe ", ANY_TEXT, NEWLINE),
          "\0",
        ), $.comment),
      ),

    comment: ($) =>
      seq(
        COMMENT_PREFIX,
        optional(choice(
          $._text_comment,
          $._change_comment,
        )),
      ),

    _change_comment: ($) =>
      seq(
        WHITESPACE,
        $.change,
      ),

    _text_comment: ($) =>
      seq(optional(WHITESPACE), /[^AMD ]/, alias(ANY_TEXT, $.comment_text)),

    text: ($) => choice(
      seq(/[^J]/, optional(ANY_TEXT)),
      seq("J", optional(seq(/[^J]/, optional(ANY_TEXT)))),
      seq("JJ", optional(seq(/[^:]/, optional(ANY_TEXT)))),
    ),
  },
})
