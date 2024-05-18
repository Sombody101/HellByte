
// Generated from /mnt/d/HellScriptLanguage/cpp-test/hellr/src/antlr/hell_assembly_lexer.g4 by ANTLR 4.13.1


#include "hell_assembly_lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct Hell_assembly_lexerStaticData final {
  Hell_assembly_lexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  Hell_assembly_lexerStaticData(const Hell_assembly_lexerStaticData&) = delete;
  Hell_assembly_lexerStaticData(Hell_assembly_lexerStaticData&&) = delete;
  Hell_assembly_lexerStaticData& operator=(const Hell_assembly_lexerStaticData&) = delete;
  Hell_assembly_lexerStaticData& operator=(Hell_assembly_lexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag hell_assembly_lexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
Hell_assembly_lexerStaticData *hell_assembly_lexerLexerStaticData = nullptr;

void hell_assembly_lexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (hell_assembly_lexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(hell_assembly_lexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<Hell_assembly_lexerStaticData>(
    std::vector<std::string>{
      "HashBang", "Assembly", "Version", "Class", "Method", "Colon", "Comma", 
      "String", "Identifier", "Type", "ESC", "SAFECODEPOINT", "Float", "Integer", 
      "WHITESPACE", "COMMENT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "'.assembly'", "'.version'", "'.class'", "'.method'", "':'", 
      "','"
    },
    std::vector<std::string>{
      "", "HashBang", "Assembly", "Version", "Class", "Method", "Colon", 
      "Comma", "String", "Identifier", "Type", "Float", "Integer", "WHITESPACE", 
      "COMMENT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,14,124,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,1,0,1,0,1,0,1,0,4,0,38,8,0,11,0,12,0,39,1,1,1,1,1,1,1,
  	1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,6,1,6,1,
  	7,1,7,1,7,5,7,83,8,7,10,7,12,7,86,9,7,1,7,1,7,1,8,1,8,4,8,92,8,8,11,8,
  	12,8,93,1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,12,1,12,1,12,1,12,1,13,4,13,
  	108,8,13,11,13,12,13,109,1,14,4,14,113,8,14,11,14,12,14,114,1,14,1,14,
  	1,15,1,15,4,15,121,8,15,11,15,12,15,122,0,0,16,1,1,3,2,5,3,7,4,9,5,11,
  	6,13,7,15,8,17,9,19,10,21,0,23,0,25,11,27,12,29,13,31,14,1,0,6,2,0,10,
  	10,13,13,8,0,9,10,13,13,32,32,40,41,91,91,93,93,123,123,125,125,8,0,34,
  	34,47,47,92,92,98,98,102,102,110,110,114,114,116,116,3,0,0,31,34,34,92,
  	92,1,0,48,57,2,0,9,9,32,32,128,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,
  	7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,
  	0,0,0,19,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,
  	1,33,1,0,0,0,3,41,1,0,0,0,5,51,1,0,0,0,7,60,1,0,0,0,9,67,1,0,0,0,11,75,
  	1,0,0,0,13,77,1,0,0,0,15,79,1,0,0,0,17,91,1,0,0,0,19,95,1,0,0,0,21,97,
  	1,0,0,0,23,100,1,0,0,0,25,102,1,0,0,0,27,107,1,0,0,0,29,112,1,0,0,0,31,
  	118,1,0,0,0,33,34,5,35,0,0,34,35,5,33,0,0,35,37,1,0,0,0,36,38,8,0,0,0,
  	37,36,1,0,0,0,38,39,1,0,0,0,39,37,1,0,0,0,39,40,1,0,0,0,40,2,1,0,0,0,
  	41,42,5,46,0,0,42,43,5,97,0,0,43,44,5,115,0,0,44,45,5,115,0,0,45,46,5,
  	101,0,0,46,47,5,109,0,0,47,48,5,98,0,0,48,49,5,108,0,0,49,50,5,121,0,
  	0,50,4,1,0,0,0,51,52,5,46,0,0,52,53,5,118,0,0,53,54,5,101,0,0,54,55,5,
  	114,0,0,55,56,5,115,0,0,56,57,5,105,0,0,57,58,5,111,0,0,58,59,5,110,0,
  	0,59,6,1,0,0,0,60,61,5,46,0,0,61,62,5,99,0,0,62,63,5,108,0,0,63,64,5,
  	97,0,0,64,65,5,115,0,0,65,66,5,115,0,0,66,8,1,0,0,0,67,68,5,46,0,0,68,
  	69,5,109,0,0,69,70,5,101,0,0,70,71,5,116,0,0,71,72,5,104,0,0,72,73,5,
  	111,0,0,73,74,5,100,0,0,74,10,1,0,0,0,75,76,5,58,0,0,76,12,1,0,0,0,77,
  	78,5,44,0,0,78,14,1,0,0,0,79,84,5,34,0,0,80,83,3,21,10,0,81,83,3,23,11,
  	0,82,80,1,0,0,0,82,81,1,0,0,0,83,86,1,0,0,0,84,82,1,0,0,0,84,85,1,0,0,
  	0,85,87,1,0,0,0,86,84,1,0,0,0,87,88,5,34,0,0,88,16,1,0,0,0,89,90,8,1,
  	0,0,90,92,9,0,0,0,91,89,1,0,0,0,92,93,1,0,0,0,93,91,1,0,0,0,93,94,1,0,
  	0,0,94,18,1,0,0,0,95,96,3,17,8,0,96,20,1,0,0,0,97,98,5,92,0,0,98,99,7,
  	2,0,0,99,22,1,0,0,0,100,101,8,3,0,0,101,24,1,0,0,0,102,103,3,27,13,0,
  	103,104,5,46,0,0,104,105,3,27,13,0,105,26,1,0,0,0,106,108,7,4,0,0,107,
  	106,1,0,0,0,108,109,1,0,0,0,109,107,1,0,0,0,109,110,1,0,0,0,110,28,1,
  	0,0,0,111,113,7,5,0,0,112,111,1,0,0,0,113,114,1,0,0,0,114,112,1,0,0,0,
  	114,115,1,0,0,0,115,116,1,0,0,0,116,117,6,14,0,0,117,30,1,0,0,0,118,120,
  	5,59,0,0,119,121,8,0,0,0,120,119,1,0,0,0,121,122,1,0,0,0,122,120,1,0,
  	0,0,122,123,1,0,0,0,123,32,1,0,0,0,8,0,39,82,84,93,109,114,122,1,6,0,
  	0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  hell_assembly_lexerLexerStaticData = staticData.release();
}

}

hell_assembly_lexer::hell_assembly_lexer(CharStream *input) : Lexer(input) {
  hell_assembly_lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *hell_assembly_lexerLexerStaticData->atn, hell_assembly_lexerLexerStaticData->decisionToDFA, hell_assembly_lexerLexerStaticData->sharedContextCache);
}

hell_assembly_lexer::~hell_assembly_lexer() {
  delete _interpreter;
}

std::string hell_assembly_lexer::getGrammarFileName() const {
  return "hell_assembly_lexer.g4";
}

const std::vector<std::string>& hell_assembly_lexer::getRuleNames() const {
  return hell_assembly_lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& hell_assembly_lexer::getChannelNames() const {
  return hell_assembly_lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& hell_assembly_lexer::getModeNames() const {
  return hell_assembly_lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& hell_assembly_lexer::getVocabulary() const {
  return hell_assembly_lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView hell_assembly_lexer::getSerializedATN() const {
  return hell_assembly_lexerLexerStaticData->serializedATN;
}

const atn::ATN& hell_assembly_lexer::getATN() const {
  return *hell_assembly_lexerLexerStaticData->atn;
}




void hell_assembly_lexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  hell_assembly_lexerLexerInitialize();
#else
  ::antlr4::internal::call_once(hell_assembly_lexerLexerOnceFlag, hell_assembly_lexerLexerInitialize);
#endif
}
