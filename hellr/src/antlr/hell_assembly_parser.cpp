
// Generated from f:/HellScriptLanguage/cpp-test/hell-runtime/src/antlr/hell_assembly_parser.g4 by ANTLR 4.13.1


#include "hell_assembly_parserVisitor.h"

#include "hell_assembly_parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct Hell_assembly_parserStaticData final {
  Hell_assembly_parserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Hell_assembly_parserStaticData(const Hell_assembly_parserStaticData&) = delete;
  Hell_assembly_parserStaticData(Hell_assembly_parserStaticData&&) = delete;
  Hell_assembly_parserStaticData& operator=(const Hell_assembly_parserStaticData&) = delete;
  Hell_assembly_parserStaticData& operator=(Hell_assembly_parserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hell_assembly_parserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Hell_assembly_parserStaticData *hell_assembly_parserParserStaticData = nullptr;

void hell_assembly_parserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hell_assembly_parserParserStaticData != nullptr) {
    return;
  }
#else
  assert(hell_assembly_parserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Hell_assembly_parserStaticData>(
    std::vector<std::string>{
      "assembly", "assemblyAttribute", "assemblyAttributeItem", "assemblyVersion", 
      "statement", "definition", "classDefinition", "methodDefinition", 
      "methodArguments", "methodArgument", "blockStatement", "label", "op_code", 
      "constant"
    },
    std::vector<std::string>{
      "", "", "'.assembly'", "'.version'", "'.method'", "'.class'", "','", 
      "'{'", "'}'", "'('", "')'", "'['", "']'", "':'", "'&'"
    },
    std::vector<std::string>{
      "", "HashBang", "AssemblyAttribute", "AssemblyVersion", "MethodDefinition", 
      "ClassDefinition", "Comma", "L_Brace", "R_Brace", "L_Paren", "R_Paren", 
      "L_Brack", "R_Brack", "Colon", "And", "String", "Integer", "Float", 
      "Identifier", "Type", "WHITESPACE", "NEWLINE", "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,22,125,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,1,0,3,0,
  	30,8,0,1,0,3,0,33,8,0,1,0,5,0,36,8,0,10,0,12,0,39,9,0,1,0,1,0,1,1,1,1,
  	1,1,1,1,5,1,47,8,1,10,1,12,1,50,9,1,1,1,1,1,1,2,1,2,1,2,1,3,1,3,1,3,1,
  	3,1,3,1,3,1,3,1,3,1,4,1,4,3,4,67,8,4,1,5,1,5,3,5,71,8,5,1,6,1,6,1,6,5,
  	6,76,8,6,10,6,12,6,79,9,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,5,7,
  	91,8,7,10,7,12,7,94,9,7,1,7,1,7,1,8,1,8,1,8,5,8,101,8,8,10,8,12,8,104,
  	9,8,1,9,1,9,1,9,1,10,3,10,110,8,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,
  	1,12,1,12,3,12,121,8,12,1,13,1,13,1,13,0,0,14,0,2,4,6,8,10,12,14,16,18,
  	20,22,24,26,0,0,122,0,29,1,0,0,0,2,42,1,0,0,0,4,53,1,0,0,0,6,56,1,0,0,
  	0,8,66,1,0,0,0,10,70,1,0,0,0,12,72,1,0,0,0,14,82,1,0,0,0,16,97,1,0,0,
  	0,18,105,1,0,0,0,20,109,1,0,0,0,22,113,1,0,0,0,24,117,1,0,0,0,26,122,
  	1,0,0,0,28,30,5,1,0,0,29,28,1,0,0,0,29,30,1,0,0,0,30,32,1,0,0,0,31,33,
  	3,2,1,0,32,31,1,0,0,0,32,33,1,0,0,0,33,37,1,0,0,0,34,36,3,8,4,0,35,34,
  	1,0,0,0,36,39,1,0,0,0,37,35,1,0,0,0,37,38,1,0,0,0,38,40,1,0,0,0,39,37,
  	1,0,0,0,40,41,5,0,0,1,41,1,1,0,0,0,42,43,5,2,0,0,43,44,5,18,0,0,44,48,
  	5,7,0,0,45,47,3,4,2,0,46,45,1,0,0,0,47,50,1,0,0,0,48,46,1,0,0,0,48,49,
  	1,0,0,0,49,51,1,0,0,0,50,48,1,0,0,0,51,52,5,8,0,0,52,3,1,0,0,0,53,54,
  	5,3,0,0,54,55,3,6,3,0,55,5,1,0,0,0,56,57,5,16,0,0,57,58,5,13,0,0,58,59,
  	5,16,0,0,59,60,5,13,0,0,60,61,5,16,0,0,61,62,5,13,0,0,62,63,5,16,0,0,
  	63,7,1,0,0,0,64,67,3,24,12,0,65,67,3,10,5,0,66,64,1,0,0,0,66,65,1,0,0,
  	0,67,9,1,0,0,0,68,71,3,12,6,0,69,71,3,14,7,0,70,68,1,0,0,0,70,69,1,0,
  	0,0,71,11,1,0,0,0,72,73,5,5,0,0,73,77,5,7,0,0,74,76,3,10,5,0,75,74,1,
  	0,0,0,76,79,1,0,0,0,77,75,1,0,0,0,77,78,1,0,0,0,78,80,1,0,0,0,79,77,1,
  	0,0,0,80,81,5,8,0,0,81,13,1,0,0,0,82,83,5,4,0,0,83,84,5,19,0,0,84,85,
  	5,18,0,0,85,86,5,9,0,0,86,87,3,16,8,0,87,88,5,10,0,0,88,92,5,7,0,0,89,
  	91,3,20,10,0,90,89,1,0,0,0,91,94,1,0,0,0,92,90,1,0,0,0,92,93,1,0,0,0,
  	93,95,1,0,0,0,94,92,1,0,0,0,95,96,5,8,0,0,96,15,1,0,0,0,97,102,3,18,9,
  	0,98,99,5,6,0,0,99,101,3,18,9,0,100,98,1,0,0,0,101,104,1,0,0,0,102,100,
  	1,0,0,0,102,103,1,0,0,0,103,17,1,0,0,0,104,102,1,0,0,0,105,106,5,19,0,
  	0,106,107,5,18,0,0,107,19,1,0,0,0,108,110,3,22,11,0,109,108,1,0,0,0,109,
  	110,1,0,0,0,110,111,1,0,0,0,111,112,3,24,12,0,112,21,1,0,0,0,113,114,
  	5,18,0,0,114,115,5,13,0,0,115,116,3,24,12,0,116,23,1,0,0,0,117,120,5,
  	18,0,0,118,121,3,26,13,0,119,121,5,18,0,0,120,118,1,0,0,0,120,119,1,0,
  	0,0,120,121,1,0,0,0,121,25,1,0,0,0,122,123,5,15,0,0,123,27,1,0,0,0,11,
  	29,32,37,48,66,70,77,92,102,109,120
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hell_assembly_parserParserStaticData = staticData.release();
}

}

hell_assembly_parser::hell_assembly_parser(TokenStream *input) : hell_assembly_parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

hell_assembly_parser::hell_assembly_parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  hell_assembly_parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *hell_assembly_parserParserStaticData->atn, hell_assembly_parserParserStaticData->decisionToDFA, hell_assembly_parserParserStaticData->sharedContextCache, options);
}

hell_assembly_parser::~hell_assembly_parser() {
  delete _interpreter;
}

const atn::ATN& hell_assembly_parser::getATN() const {
  return *hell_assembly_parserParserStaticData->atn;
}

std::string hell_assembly_parser::getGrammarFileName() const {
  return "hell_assembly_parser.g4";
}

const std::vector<std::string>& hell_assembly_parser::getRuleNames() const {
  return hell_assembly_parserParserStaticData->ruleNames;
}

const dfa::Vocabulary& hell_assembly_parser::getVocabulary() const {
  return hell_assembly_parserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView hell_assembly_parser::getSerializedATN() const {
  return hell_assembly_parserParserStaticData->serializedATN;
}


//----------------- AssemblyContext ------------------------------------------------------------------

hell_assembly_parser::AssemblyContext::AssemblyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::AssemblyContext::EOF() {
  return getToken(hell_assembly_parser::EOF, 0);
}

tree::TerminalNode* hell_assembly_parser::AssemblyContext::HashBang() {
  return getToken(hell_assembly_parser::HashBang, 0);
}

hell_assembly_parser::AssemblyAttributeContext* hell_assembly_parser::AssemblyContext::assemblyAttribute() {
  return getRuleContext<hell_assembly_parser::AssemblyAttributeContext>(0);
}

std::vector<hell_assembly_parser::StatementContext *> hell_assembly_parser::AssemblyContext::statement() {
  return getRuleContexts<hell_assembly_parser::StatementContext>();
}

hell_assembly_parser::StatementContext* hell_assembly_parser::AssemblyContext::statement(size_t i) {
  return getRuleContext<hell_assembly_parser::StatementContext>(i);
}


size_t hell_assembly_parser::AssemblyContext::getRuleIndex() const {
  return hell_assembly_parser::RuleAssembly;
}


std::any hell_assembly_parser::AssemblyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitAssembly(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::AssemblyContext* hell_assembly_parser::assembly() {
  AssemblyContext *_localctx = _tracker.createInstance<AssemblyContext>(_ctx, getState());
  enterRule(_localctx, 0, hell_assembly_parser::RuleAssembly);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(29);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hell_assembly_parser::HashBang) {
      setState(28);
      match(hell_assembly_parser::HashBang);
    }
    setState(32);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == hell_assembly_parser::AssemblyAttribute) {
      setState(31);
      assemblyAttribute();
    }
    setState(37);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 262192) != 0)) {
      setState(34);
      statement();
      setState(39);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(40);
    match(hell_assembly_parser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyAttributeContext ------------------------------------------------------------------

hell_assembly_parser::AssemblyAttributeContext::AssemblyAttributeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::AssemblyAttributeContext::AssemblyAttribute() {
  return getToken(hell_assembly_parser::AssemblyAttribute, 0);
}

tree::TerminalNode* hell_assembly_parser::AssemblyAttributeContext::Identifier() {
  return getToken(hell_assembly_parser::Identifier, 0);
}

tree::TerminalNode* hell_assembly_parser::AssemblyAttributeContext::L_Brace() {
  return getToken(hell_assembly_parser::L_Brace, 0);
}

tree::TerminalNode* hell_assembly_parser::AssemblyAttributeContext::R_Brace() {
  return getToken(hell_assembly_parser::R_Brace, 0);
}

std::vector<hell_assembly_parser::AssemblyAttributeItemContext *> hell_assembly_parser::AssemblyAttributeContext::assemblyAttributeItem() {
  return getRuleContexts<hell_assembly_parser::AssemblyAttributeItemContext>();
}

hell_assembly_parser::AssemblyAttributeItemContext* hell_assembly_parser::AssemblyAttributeContext::assemblyAttributeItem(size_t i) {
  return getRuleContext<hell_assembly_parser::AssemblyAttributeItemContext>(i);
}


size_t hell_assembly_parser::AssemblyAttributeContext::getRuleIndex() const {
  return hell_assembly_parser::RuleAssemblyAttribute;
}


std::any hell_assembly_parser::AssemblyAttributeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitAssemblyAttribute(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::AssemblyAttributeContext* hell_assembly_parser::assemblyAttribute() {
  AssemblyAttributeContext *_localctx = _tracker.createInstance<AssemblyAttributeContext>(_ctx, getState());
  enterRule(_localctx, 2, hell_assembly_parser::RuleAssemblyAttribute);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(42);
    match(hell_assembly_parser::AssemblyAttribute);
    setState(43);
    match(hell_assembly_parser::Identifier);
    setState(44);
    match(hell_assembly_parser::L_Brace);
    setState(48);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hell_assembly_parser::AssemblyVersion) {
      setState(45);
      assemblyAttributeItem();
      setState(50);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(51);
    match(hell_assembly_parser::R_Brace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyAttributeItemContext ------------------------------------------------------------------

hell_assembly_parser::AssemblyAttributeItemContext::AssemblyAttributeItemContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::AssemblyAttributeItemContext::AssemblyVersion() {
  return getToken(hell_assembly_parser::AssemblyVersion, 0);
}

hell_assembly_parser::AssemblyVersionContext* hell_assembly_parser::AssemblyAttributeItemContext::assemblyVersion() {
  return getRuleContext<hell_assembly_parser::AssemblyVersionContext>(0);
}


size_t hell_assembly_parser::AssemblyAttributeItemContext::getRuleIndex() const {
  return hell_assembly_parser::RuleAssemblyAttributeItem;
}


std::any hell_assembly_parser::AssemblyAttributeItemContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitAssemblyAttributeItem(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::AssemblyAttributeItemContext* hell_assembly_parser::assemblyAttributeItem() {
  AssemblyAttributeItemContext *_localctx = _tracker.createInstance<AssemblyAttributeItemContext>(_ctx, getState());
  enterRule(_localctx, 4, hell_assembly_parser::RuleAssemblyAttributeItem);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(53);
    match(hell_assembly_parser::AssemblyVersion);
    setState(54);
    assemblyVersion();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssemblyVersionContext ------------------------------------------------------------------

hell_assembly_parser::AssemblyVersionContext::AssemblyVersionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> hell_assembly_parser::AssemblyVersionContext::Integer() {
  return getTokens(hell_assembly_parser::Integer);
}

tree::TerminalNode* hell_assembly_parser::AssemblyVersionContext::Integer(size_t i) {
  return getToken(hell_assembly_parser::Integer, i);
}

std::vector<tree::TerminalNode *> hell_assembly_parser::AssemblyVersionContext::Colon() {
  return getTokens(hell_assembly_parser::Colon);
}

tree::TerminalNode* hell_assembly_parser::AssemblyVersionContext::Colon(size_t i) {
  return getToken(hell_assembly_parser::Colon, i);
}


size_t hell_assembly_parser::AssemblyVersionContext::getRuleIndex() const {
  return hell_assembly_parser::RuleAssemblyVersion;
}


std::any hell_assembly_parser::AssemblyVersionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitAssemblyVersion(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::AssemblyVersionContext* hell_assembly_parser::assemblyVersion() {
  AssemblyVersionContext *_localctx = _tracker.createInstance<AssemblyVersionContext>(_ctx, getState());
  enterRule(_localctx, 6, hell_assembly_parser::RuleAssemblyVersion);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(56);
    match(hell_assembly_parser::Integer);
    setState(57);
    match(hell_assembly_parser::Colon);
    setState(58);
    match(hell_assembly_parser::Integer);
    setState(59);
    match(hell_assembly_parser::Colon);
    setState(60);
    match(hell_assembly_parser::Integer);
    setState(61);
    match(hell_assembly_parser::Colon);
    setState(62);
    match(hell_assembly_parser::Integer);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

hell_assembly_parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hell_assembly_parser::Op_codeContext* hell_assembly_parser::StatementContext::op_code() {
  return getRuleContext<hell_assembly_parser::Op_codeContext>(0);
}

hell_assembly_parser::DefinitionContext* hell_assembly_parser::StatementContext::definition() {
  return getRuleContext<hell_assembly_parser::DefinitionContext>(0);
}


size_t hell_assembly_parser::StatementContext::getRuleIndex() const {
  return hell_assembly_parser::RuleStatement;
}


std::any hell_assembly_parser::StatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitStatement(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::StatementContext* hell_assembly_parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 8, hell_assembly_parser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(66);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hell_assembly_parser::Identifier: {
        enterOuterAlt(_localctx, 1);
        setState(64);
        op_code();
        break;
      }

      case hell_assembly_parser::MethodDefinition:
      case hell_assembly_parser::ClassDefinition: {
        enterOuterAlt(_localctx, 2);
        setState(65);
        definition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- DefinitionContext ------------------------------------------------------------------

hell_assembly_parser::DefinitionContext::DefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hell_assembly_parser::ClassDefinitionContext* hell_assembly_parser::DefinitionContext::classDefinition() {
  return getRuleContext<hell_assembly_parser::ClassDefinitionContext>(0);
}

hell_assembly_parser::MethodDefinitionContext* hell_assembly_parser::DefinitionContext::methodDefinition() {
  return getRuleContext<hell_assembly_parser::MethodDefinitionContext>(0);
}


size_t hell_assembly_parser::DefinitionContext::getRuleIndex() const {
  return hell_assembly_parser::RuleDefinition;
}


std::any hell_assembly_parser::DefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitDefinition(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::DefinitionContext* hell_assembly_parser::definition() {
  DefinitionContext *_localctx = _tracker.createInstance<DefinitionContext>(_ctx, getState());
  enterRule(_localctx, 10, hell_assembly_parser::RuleDefinition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(70);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case hell_assembly_parser::ClassDefinition: {
        enterOuterAlt(_localctx, 1);
        setState(68);
        classDefinition();
        break;
      }

      case hell_assembly_parser::MethodDefinition: {
        enterOuterAlt(_localctx, 2);
        setState(69);
        methodDefinition();
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ClassDefinitionContext ------------------------------------------------------------------

hell_assembly_parser::ClassDefinitionContext::ClassDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::ClassDefinitionContext::ClassDefinition() {
  return getToken(hell_assembly_parser::ClassDefinition, 0);
}

tree::TerminalNode* hell_assembly_parser::ClassDefinitionContext::L_Brace() {
  return getToken(hell_assembly_parser::L_Brace, 0);
}

tree::TerminalNode* hell_assembly_parser::ClassDefinitionContext::R_Brace() {
  return getToken(hell_assembly_parser::R_Brace, 0);
}

std::vector<hell_assembly_parser::DefinitionContext *> hell_assembly_parser::ClassDefinitionContext::definition() {
  return getRuleContexts<hell_assembly_parser::DefinitionContext>();
}

hell_assembly_parser::DefinitionContext* hell_assembly_parser::ClassDefinitionContext::definition(size_t i) {
  return getRuleContext<hell_assembly_parser::DefinitionContext>(i);
}


size_t hell_assembly_parser::ClassDefinitionContext::getRuleIndex() const {
  return hell_assembly_parser::RuleClassDefinition;
}


std::any hell_assembly_parser::ClassDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitClassDefinition(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::ClassDefinitionContext* hell_assembly_parser::classDefinition() {
  ClassDefinitionContext *_localctx = _tracker.createInstance<ClassDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 12, hell_assembly_parser::RuleClassDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(72);
    match(hell_assembly_parser::ClassDefinition);
    setState(73);
    match(hell_assembly_parser::L_Brace);
    setState(77);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hell_assembly_parser::MethodDefinition

    || _la == hell_assembly_parser::ClassDefinition) {
      setState(74);
      definition();
      setState(79);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(80);
    match(hell_assembly_parser::R_Brace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodDefinitionContext ------------------------------------------------------------------

hell_assembly_parser::MethodDefinitionContext::MethodDefinitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::MethodDefinitionContext::MethodDefinition() {
  return getToken(hell_assembly_parser::MethodDefinition, 0);
}

tree::TerminalNode* hell_assembly_parser::MethodDefinitionContext::Type() {
  return getToken(hell_assembly_parser::Type, 0);
}

tree::TerminalNode* hell_assembly_parser::MethodDefinitionContext::Identifier() {
  return getToken(hell_assembly_parser::Identifier, 0);
}

tree::TerminalNode* hell_assembly_parser::MethodDefinitionContext::L_Paren() {
  return getToken(hell_assembly_parser::L_Paren, 0);
}

hell_assembly_parser::MethodArgumentsContext* hell_assembly_parser::MethodDefinitionContext::methodArguments() {
  return getRuleContext<hell_assembly_parser::MethodArgumentsContext>(0);
}

tree::TerminalNode* hell_assembly_parser::MethodDefinitionContext::R_Paren() {
  return getToken(hell_assembly_parser::R_Paren, 0);
}

tree::TerminalNode* hell_assembly_parser::MethodDefinitionContext::L_Brace() {
  return getToken(hell_assembly_parser::L_Brace, 0);
}

tree::TerminalNode* hell_assembly_parser::MethodDefinitionContext::R_Brace() {
  return getToken(hell_assembly_parser::R_Brace, 0);
}

std::vector<hell_assembly_parser::BlockStatementContext *> hell_assembly_parser::MethodDefinitionContext::blockStatement() {
  return getRuleContexts<hell_assembly_parser::BlockStatementContext>();
}

hell_assembly_parser::BlockStatementContext* hell_assembly_parser::MethodDefinitionContext::blockStatement(size_t i) {
  return getRuleContext<hell_assembly_parser::BlockStatementContext>(i);
}


size_t hell_assembly_parser::MethodDefinitionContext::getRuleIndex() const {
  return hell_assembly_parser::RuleMethodDefinition;
}


std::any hell_assembly_parser::MethodDefinitionContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitMethodDefinition(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::MethodDefinitionContext* hell_assembly_parser::methodDefinition() {
  MethodDefinitionContext *_localctx = _tracker.createInstance<MethodDefinitionContext>(_ctx, getState());
  enterRule(_localctx, 14, hell_assembly_parser::RuleMethodDefinition);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(82);
    match(hell_assembly_parser::MethodDefinition);
    setState(83);
    match(hell_assembly_parser::Type);
    setState(84);
    match(hell_assembly_parser::Identifier);
    setState(85);
    match(hell_assembly_parser::L_Paren);
    setState(86);
    methodArguments();
    setState(87);
    match(hell_assembly_parser::R_Paren);
    setState(88);
    match(hell_assembly_parser::L_Brace);
    setState(92);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hell_assembly_parser::Identifier) {
      setState(89);
      blockStatement();
      setState(94);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(95);
    match(hell_assembly_parser::R_Brace);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodArgumentsContext ------------------------------------------------------------------

hell_assembly_parser::MethodArgumentsContext::MethodArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<hell_assembly_parser::MethodArgumentContext *> hell_assembly_parser::MethodArgumentsContext::methodArgument() {
  return getRuleContexts<hell_assembly_parser::MethodArgumentContext>();
}

hell_assembly_parser::MethodArgumentContext* hell_assembly_parser::MethodArgumentsContext::methodArgument(size_t i) {
  return getRuleContext<hell_assembly_parser::MethodArgumentContext>(i);
}

std::vector<tree::TerminalNode *> hell_assembly_parser::MethodArgumentsContext::Comma() {
  return getTokens(hell_assembly_parser::Comma);
}

tree::TerminalNode* hell_assembly_parser::MethodArgumentsContext::Comma(size_t i) {
  return getToken(hell_assembly_parser::Comma, i);
}


size_t hell_assembly_parser::MethodArgumentsContext::getRuleIndex() const {
  return hell_assembly_parser::RuleMethodArguments;
}


std::any hell_assembly_parser::MethodArgumentsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitMethodArguments(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::MethodArgumentsContext* hell_assembly_parser::methodArguments() {
  MethodArgumentsContext *_localctx = _tracker.createInstance<MethodArgumentsContext>(_ctx, getState());
  enterRule(_localctx, 16, hell_assembly_parser::RuleMethodArguments);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(97);
    methodArgument();
    setState(102);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == hell_assembly_parser::Comma) {
      setState(98);
      match(hell_assembly_parser::Comma);
      setState(99);
      methodArgument();
      setState(104);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- MethodArgumentContext ------------------------------------------------------------------

hell_assembly_parser::MethodArgumentContext::MethodArgumentContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::MethodArgumentContext::Type() {
  return getToken(hell_assembly_parser::Type, 0);
}

tree::TerminalNode* hell_assembly_parser::MethodArgumentContext::Identifier() {
  return getToken(hell_assembly_parser::Identifier, 0);
}


size_t hell_assembly_parser::MethodArgumentContext::getRuleIndex() const {
  return hell_assembly_parser::RuleMethodArgument;
}


std::any hell_assembly_parser::MethodArgumentContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitMethodArgument(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::MethodArgumentContext* hell_assembly_parser::methodArgument() {
  MethodArgumentContext *_localctx = _tracker.createInstance<MethodArgumentContext>(_ctx, getState());
  enterRule(_localctx, 18, hell_assembly_parser::RuleMethodArgument);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(105);
    match(hell_assembly_parser::Type);
    setState(106);
    match(hell_assembly_parser::Identifier);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BlockStatementContext ------------------------------------------------------------------

hell_assembly_parser::BlockStatementContext::BlockStatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

hell_assembly_parser::Op_codeContext* hell_assembly_parser::BlockStatementContext::op_code() {
  return getRuleContext<hell_assembly_parser::Op_codeContext>(0);
}

hell_assembly_parser::LabelContext* hell_assembly_parser::BlockStatementContext::label() {
  return getRuleContext<hell_assembly_parser::LabelContext>(0);
}


size_t hell_assembly_parser::BlockStatementContext::getRuleIndex() const {
  return hell_assembly_parser::RuleBlockStatement;
}


std::any hell_assembly_parser::BlockStatementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitBlockStatement(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::BlockStatementContext* hell_assembly_parser::blockStatement() {
  BlockStatementContext *_localctx = _tracker.createInstance<BlockStatementContext>(_ctx, getState());
  enterRule(_localctx, 20, hell_assembly_parser::RuleBlockStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(109);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      setState(108);
      label();
      break;
    }

    default:
      break;
    }
    setState(111);
    op_code();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- LabelContext ------------------------------------------------------------------

hell_assembly_parser::LabelContext::LabelContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::LabelContext::Identifier() {
  return getToken(hell_assembly_parser::Identifier, 0);
}

tree::TerminalNode* hell_assembly_parser::LabelContext::Colon() {
  return getToken(hell_assembly_parser::Colon, 0);
}

hell_assembly_parser::Op_codeContext* hell_assembly_parser::LabelContext::op_code() {
  return getRuleContext<hell_assembly_parser::Op_codeContext>(0);
}


size_t hell_assembly_parser::LabelContext::getRuleIndex() const {
  return hell_assembly_parser::RuleLabel;
}


std::any hell_assembly_parser::LabelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitLabel(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::LabelContext* hell_assembly_parser::label() {
  LabelContext *_localctx = _tracker.createInstance<LabelContext>(_ctx, getState());
  enterRule(_localctx, 22, hell_assembly_parser::RuleLabel);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(113);
    match(hell_assembly_parser::Identifier);
    setState(114);
    match(hell_assembly_parser::Colon);
    setState(115);
    op_code();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_codeContext ------------------------------------------------------------------

hell_assembly_parser::Op_codeContext::Op_codeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> hell_assembly_parser::Op_codeContext::Identifier() {
  return getTokens(hell_assembly_parser::Identifier);
}

tree::TerminalNode* hell_assembly_parser::Op_codeContext::Identifier(size_t i) {
  return getToken(hell_assembly_parser::Identifier, i);
}

hell_assembly_parser::ConstantContext* hell_assembly_parser::Op_codeContext::constant() {
  return getRuleContext<hell_assembly_parser::ConstantContext>(0);
}


size_t hell_assembly_parser::Op_codeContext::getRuleIndex() const {
  return hell_assembly_parser::RuleOp_code;
}


std::any hell_assembly_parser::Op_codeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitOp_code(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::Op_codeContext* hell_assembly_parser::op_code() {
  Op_codeContext *_localctx = _tracker.createInstance<Op_codeContext>(_ctx, getState());
  enterRule(_localctx, 24, hell_assembly_parser::RuleOp_code);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(117);
    match(hell_assembly_parser::Identifier);
    setState(120);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(118);
      constant();
      break;
    }

    case 2: {
      setState(119);
      match(hell_assembly_parser::Identifier);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ConstantContext ------------------------------------------------------------------

hell_assembly_parser::ConstantContext::ConstantContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* hell_assembly_parser::ConstantContext::String() {
  return getToken(hell_assembly_parser::String, 0);
}


size_t hell_assembly_parser::ConstantContext::getRuleIndex() const {
  return hell_assembly_parser::RuleConstant;
}


std::any hell_assembly_parser::ConstantContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<hell_assembly_parserVisitor*>(visitor))
    return parserVisitor->visitConstant(this);
  else
    return visitor->visitChildren(this);
}

hell_assembly_parser::ConstantContext* hell_assembly_parser::constant() {
  ConstantContext *_localctx = _tracker.createInstance<ConstantContext>(_ctx, getState());
  enterRule(_localctx, 26, hell_assembly_parser::RuleConstant);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(122);
    match(hell_assembly_parser::String);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void hell_assembly_parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hell_assembly_parserParserInitialize();
#else
  ::antlr4::internal::call_once(hell_assembly_parserParserOnceFlag, hell_assembly_parserParserInitialize);
#endif
}
