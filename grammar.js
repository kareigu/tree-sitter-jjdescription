const NEWLINE = /\r?\n/;
const ANY_TEXT = /[^\r\n]+?/
const WHITESPACE = /[\f\v ]+/
const COMMENT_PREFIX = "JJ:"

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
