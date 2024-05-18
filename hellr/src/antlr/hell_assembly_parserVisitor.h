
// Generated from f:/HellScriptLanguage/cpp-test/hell-runtime/src/antlr/hell_assembly_parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "hell_assembly_parser.h"



/**
 * This class defines an abstract visitor for a parse tree
 * produced by hell_assembly_parser.
 */
class  hell_assembly_parserVisitor : public antlr4::tree::AbstractParseTreeVisitor {
public:

  /**
   * Visit parse trees produced by hell_assembly_parser.
   */
    virtual std::any visitAssembly(hell_assembly_parser::AssemblyContext *context) = 0;

    virtual std::any visitAssemblyAttribute(hell_assembly_parser::AssemblyAttributeContext *context) = 0;

    virtual std::any visitAssemblyAttributeItem(hell_assembly_parser::AssemblyAttributeItemContext *context) = 0;

    virtual std::any visitAssemblyVersion(hell_assembly_parser::AssemblyVersionContext *context) = 0;

    virtual std::any visitStatement(hell_assembly_parser::StatementContext *context) = 0;

    virtual std::any visitDefinition(hell_assembly_parser::DefinitionContext *context) = 0;

    virtual std::any visitClassDefinition(hell_assembly_parser::ClassDefinitionContext *context) = 0;

    virtual std::any visitMethodDefinition(hell_assembly_parser::MethodDefinitionContext *context) = 0;

    virtual std::any visitMethodArguments(hell_assembly_parser::MethodArgumentsContext *context) = 0;

    virtual std::any visitMethodArgument(hell_assembly_parser::MethodArgumentContext *context) = 0;

    virtual std::any visitBlockStatement(hell_assembly_parser::BlockStatementContext *context) = 0;

    virtual std::any visitLabel(hell_assembly_parser::LabelContext *context) = 0;

    virtual std::any visitOp_code(hell_assembly_parser::Op_codeContext *context) = 0;

    virtual std::any visitConstant(hell_assembly_parser::ConstantContext *context) = 0;


};

