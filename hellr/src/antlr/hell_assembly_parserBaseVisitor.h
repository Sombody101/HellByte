
// Generated from f:/HellScriptLanguage/cpp-test/hell-runtime/src/antlr/hell_assembly_parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"
#include "hell_assembly_parserVisitor.h"


/**
 * This class provides an empty implementation of hell_assembly_parserVisitor, which can be
 * extended to create a visitor which only needs to handle a subset of the available methods.
 */
class  hell_assembly_parserBaseVisitor : public hell_assembly_parserVisitor {
public:

  virtual std::any visitAssembly(hell_assembly_parser::AssemblyContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssemblyAttribute(hell_assembly_parser::AssemblyAttributeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssemblyAttributeItem(hell_assembly_parser::AssemblyAttributeItemContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitAssemblyVersion(hell_assembly_parser::AssemblyVersionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitStatement(hell_assembly_parser::StatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitDefinition(hell_assembly_parser::DefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitClassDefinition(hell_assembly_parser::ClassDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodDefinition(hell_assembly_parser::MethodDefinitionContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodArguments(hell_assembly_parser::MethodArgumentsContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitMethodArgument(hell_assembly_parser::MethodArgumentContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitBlockStatement(hell_assembly_parser::BlockStatementContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitLabel(hell_assembly_parser::LabelContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitOp_code(hell_assembly_parser::Op_codeContext *ctx) override {
    return visitChildren(ctx);
  }

  virtual std::any visitConstant(hell_assembly_parser::ConstantContext *ctx) override {
    return visitChildren(ctx);
  }


};

