
// Generated from f:/HellScriptLanguage/cpp-test/hell-runtime/src/antlr/hell_assembly_parser.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  hell_assembly_parser : public antlr4::Parser {
public:
  enum {
    HashBang = 1, AssemblyAttribute = 2, AssemblyVersion = 3, MethodDefinition = 4, 
    ClassDefinition = 5, Comma = 6, L_Brace = 7, R_Brace = 8, L_Paren = 9, 
    R_Paren = 10, L_Brack = 11, R_Brack = 12, Colon = 13, And = 14, String = 15, 
    Integer = 16, Float = 17, Identifier = 18, Type = 19, WHITESPACE = 20, 
    NEWLINE = 21, COMMENT = 22
  };

  enum {
    RuleAssembly = 0, RuleAssemblyAttribute = 1, RuleAssemblyAttributeItem = 2, 
    RuleAssemblyVersion = 3, RuleStatement = 4, RuleDefinition = 5, RuleClassDefinition = 6, 
    RuleMethodDefinition = 7, RuleMethodArguments = 8, RuleMethodArgument = 9, 
    RuleBlockStatement = 10, RuleLabel = 11, RuleOp_code = 12, RuleConstant = 13
  };

  explicit hell_assembly_parser(antlr4::TokenStream *input);

  hell_assembly_parser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~hell_assembly_parser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class AssemblyContext;
  class AssemblyAttributeContext;
  class AssemblyAttributeItemContext;
  class AssemblyVersionContext;
  class StatementContext;
  class DefinitionContext;
  class ClassDefinitionContext;
  class MethodDefinitionContext;
  class MethodArgumentsContext;
  class MethodArgumentContext;
  class BlockStatementContext;
  class LabelContext;
  class Op_codeContext;
  class ConstantContext; 

  class  AssemblyContext : public antlr4::ParserRuleContext {
  public:
    AssemblyContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *EOF();
    antlr4::tree::TerminalNode *HashBang();
    AssemblyAttributeContext *assemblyAttribute();
    std::vector<StatementContext *> statement();
    StatementContext* statement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyContext* assembly();

  class  AssemblyAttributeContext : public antlr4::ParserRuleContext {
  public:
    AssemblyAttributeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AssemblyAttribute();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *L_Brace();
    antlr4::tree::TerminalNode *R_Brace();
    std::vector<AssemblyAttributeItemContext *> assemblyAttributeItem();
    AssemblyAttributeItemContext* assemblyAttributeItem(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyAttributeContext* assemblyAttribute();

  class  AssemblyAttributeItemContext : public antlr4::ParserRuleContext {
  public:
    AssemblyAttributeItemContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *AssemblyVersion();
    AssemblyVersionContext *assemblyVersion();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyAttributeItemContext* assemblyAttributeItem();

  class  AssemblyVersionContext : public antlr4::ParserRuleContext {
  public:
    AssemblyVersionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Integer();
    antlr4::tree::TerminalNode* Integer(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Colon();
    antlr4::tree::TerminalNode* Colon(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  AssemblyVersionContext* assemblyVersion();

  class  StatementContext : public antlr4::ParserRuleContext {
  public:
    StatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_codeContext *op_code();
    DefinitionContext *definition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  StatementContext* statement();

  class  DefinitionContext : public antlr4::ParserRuleContext {
  public:
    DefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ClassDefinitionContext *classDefinition();
    MethodDefinitionContext *methodDefinition();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  DefinitionContext* definition();

  class  ClassDefinitionContext : public antlr4::ParserRuleContext {
  public:
    ClassDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *ClassDefinition();
    antlr4::tree::TerminalNode *L_Brace();
    antlr4::tree::TerminalNode *R_Brace();
    std::vector<DefinitionContext *> definition();
    DefinitionContext* definition(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ClassDefinitionContext* classDefinition();

  class  MethodDefinitionContext : public antlr4::ParserRuleContext {
  public:
    MethodDefinitionContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *MethodDefinition();
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *L_Paren();
    MethodArgumentsContext *methodArguments();
    antlr4::tree::TerminalNode *R_Paren();
    antlr4::tree::TerminalNode *L_Brace();
    antlr4::tree::TerminalNode *R_Brace();
    std::vector<BlockStatementContext *> blockStatement();
    BlockStatementContext* blockStatement(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodDefinitionContext* methodDefinition();

  class  MethodArgumentsContext : public antlr4::ParserRuleContext {
  public:
    MethodArgumentsContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<MethodArgumentContext *> methodArgument();
    MethodArgumentContext* methodArgument(size_t i);
    std::vector<antlr4::tree::TerminalNode *> Comma();
    antlr4::tree::TerminalNode* Comma(size_t i);


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodArgumentsContext* methodArguments();

  class  MethodArgumentContext : public antlr4::ParserRuleContext {
  public:
    MethodArgumentContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Type();
    antlr4::tree::TerminalNode *Identifier();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  MethodArgumentContext* methodArgument();

  class  BlockStatementContext : public antlr4::ParserRuleContext {
  public:
    BlockStatementContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    Op_codeContext *op_code();
    LabelContext *label();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  BlockStatementContext* blockStatement();

  class  LabelContext : public antlr4::ParserRuleContext {
  public:
    LabelContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *Identifier();
    antlr4::tree::TerminalNode *Colon();
    Op_codeContext *op_code();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  LabelContext* label();

  class  Op_codeContext : public antlr4::ParserRuleContext {
  public:
    Op_codeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    std::vector<antlr4::tree::TerminalNode *> Identifier();
    antlr4::tree::TerminalNode* Identifier(size_t i);
    ConstantContext *constant();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  Op_codeContext* op_code();

  class  ConstantContext : public antlr4::ParserRuleContext {
  public:
    ConstantContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *String();


    virtual std::any accept(antlr4::tree::ParseTreeVisitor *visitor) override;
   
  };

  ConstantContext* constant();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

