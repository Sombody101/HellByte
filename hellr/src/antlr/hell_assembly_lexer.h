
// Generated from /mnt/d/HellScriptLanguage/cpp-test/hellr/src/antlr/hell_assembly_lexer.g4 by ANTLR 4.13.1

#pragma once


#include "antlr4-runtime.h"




class  hell_assembly_lexer : public antlr4::Lexer {
public:
  enum {
    HashBang = 1, Assembly = 2, Version = 3, Class = 4, Method = 5, Colon = 6, 
    Comma = 7, String = 8, Identifier = 9, Type = 10, Float = 11, Integer = 12, 
    WHITESPACE = 13, COMMENT = 14
  };

  explicit hell_assembly_lexer(antlr4::CharStream *input);

  ~hell_assembly_lexer() override;


  std::string getGrammarFileName() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const std::vector<std::string>& getChannelNames() const override;

  const std::vector<std::string>& getModeNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;

  const antlr4::atn::ATN& getATN() const override;

  // By default the static state used to implement the lexer is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:

  // Individual action functions triggered by action() above.

  // Individual semantic predicate functions triggered by sempred() above.

};

