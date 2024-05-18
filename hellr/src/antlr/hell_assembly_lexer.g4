// $antlr-format alignTrailingComments true, columnLimit 150, minEmptyLines 1
// $antlr-format maxEmptyLinesToKeep 1, reflowComments false, useTab false
// $antlr-format allowShortRulesOnASingleLine false, allowShortBlocksOnASingleLine true
// $antlr-format alignSemicolons hanging, alignColons hanging

lexer grammar hell_assembly_lexer;

HashBang
    : '#!' ~[\r\n]+
    ;

Assembly
    : '.assembly'
    ;

Version
    : '.version'
    ;

Class
    : '.class'
    ;

Method
    : '.method'
    ;

Colon
    : ':'
    ;

Comma
    : ','
    ;

String
    : '"' (ESC | SAFECODEPOINT)* '"'
    ;

Identifier
    : (~[ (){}[\]\t\n\r] .)+
    ;

Type
    : Identifier
    ;

fragment ESC
    : '\\' (["\\/bfnrt])
    ;

fragment SAFECODEPOINT
    : ~ ["\\\u0000-\u001F]
    ;

Float
    : Integer '.' Integer
    ;

Integer
    : [0-9]+
    ;

WHITESPACE
    : [ \t]+ -> skip
    ;

COMMENT
    : ';' ~[\r\n]+
    ;