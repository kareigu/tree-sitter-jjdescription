const NEW_LINE = /\r?\n/
const ANY_TEXT = /[^\r\n]+?/
const WHITESPACE = /[\f\v ]+/
const COMMENT_PREFIX = "JJ:"

module.exports = grammar({
  name: 'jjdescription',
  extras: ($) => ["\r", "\n"],

  // conflicts: ($) => [
  //   [$.change_comment, $.text_comment]
  // ],

  rules: {
    document: ($) =>
      repeat(
        choice(
          $.text,
          $.comment,
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

    text: ($) =>
      seq(/[^J\n]/, ANY_TEXT),
  },
})
