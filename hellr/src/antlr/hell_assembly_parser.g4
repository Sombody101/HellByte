// $antlr-format alignTrailingComments true, columnLimit 150, minEmptyLines 1
// $antlr-format maxEmptyLinesToKeep 1, reflowComments false, useTab false
// $antlr-format allowShortRulesOnASingleLine false, allowShortBlocksOnASingleLine true
// $antlr-format alignSemicolons hanging, alignColons hanging

parser grammar hell_assembly_parser;

options {
    tokenVocab = hell_assembly_lexer;
}

assembly
    : HashBang? assemblyAttribute? statement* EOF
    ;

assemblyAttribute
    : AssemblyAttribute Identifier '{' assemblyAttributeItem* '}'
    ;

assemblyAttributeItem
    : Version assemblyVersion
    ;

assemblyVersion
    : (Integer ':' Integer ':' Integer ':' Integer)
    ;

statement
    : op_code
    | definition
    ;

definition
    : classDefinition
    | methodDefinition
    ;

classDefinition
    : Class '{' definition* '}'
    ;

methodDefinition
    : Method Type Identifier '(' methodArguments ')' '{' blockStatement* '}'
    ;

methodArguments
    : methodArgument (',' methodArgument)*
    ;

methodArgument
    : Type Identifier
    ;

blockStatement
    : label? op_code
    ;

label
    : Identifier ':' op_code
    ;

op_code
    : Identifier (constant | Identifier)?
    ;

constant
    : String
    ;