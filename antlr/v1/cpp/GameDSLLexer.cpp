
// Generated from GameDSL.g4 by ANTLR 4.13.2


#include "GameDSLLexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct GameDSLLexerStaticData final {
  GameDSLLexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GameDSLLexerStaticData(const GameDSLLexerStaticData&) = delete;
  GameDSLLexerStaticData(GameDSLLexerStaticData&&) = delete;
  GameDSLLexerStaticData& operator=(const GameDSLLexerStaticData&) = delete;
  GameDSLLexerStaticData& operator=(GameDSLLexerStaticData&&) = delete;

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

::antlr4::internal::OnceFlag gamedsllexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GameDSLLexerStaticData> gamedsllexerLexerStaticData = nullptr;

void gamedsllexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (gamedsllexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(gamedsllexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GameDSLLexerStaticData>(
    std::vector<std::string>{
      "T__0", "T__1", "T__2", "T__3", "T__4", "T__5", "T__6", "T__7", "T__8", 
      "T__9", "T__10", "T__11", "T__12", "T__13", "T__14", "T__15", "T__16", 
      "T__17", "COMMA", "LPAREN", "RPAREN", "STRING", "NUMBER", "WS"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "'board'", "'game'", "'game_state'", "'normal'", "'start'", "'clean'", 
      "'mine'", "'sequence'", "'stopwatch'", "'random'", "'off'", "'red'", 
      "'blue'", "'violet'", "'green'", "'yellow'", "'orange'", "'white'", 
      "','", "'('", "')'"
    },
    std::vector<std::string>{
      "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", "", 
      "", "", "COMMA", "LPAREN", "RPAREN", "STRING", "NUMBER", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,24,194,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,1,0,1,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,
  	1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,4,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,
  	1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,10,1,10,1,11,1,11,1,11,
  	1,11,1,12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,13,1,13,1,13,1,13,1,14,
  	1,14,1,14,1,14,1,14,1,14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,16,1,16,
  	1,16,1,16,1,16,1,16,1,16,1,17,1,17,1,17,1,17,1,17,1,17,1,18,1,18,1,19,
  	1,19,1,20,1,20,1,21,1,21,5,21,176,8,21,10,21,12,21,179,9,21,1,21,1,21,
  	1,22,4,22,184,8,22,11,22,12,22,185,1,23,4,23,189,8,23,11,23,12,23,190,
  	1,23,1,23,0,0,24,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,9,19,10,21,11,
  	23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,21,43,22,45,
  	23,47,24,1,0,3,3,0,10,10,13,13,34,34,1,0,48,57,3,0,9,10,13,13,32,32,196,
  	0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,0,0,0,0,11,1,0,
  	0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,0,0,21,1,0,0,0,
  	0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,31,1,0,0,0,0,33,
  	1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,0,0,0,0,43,1,0,
  	0,0,0,45,1,0,0,0,0,47,1,0,0,0,1,49,1,0,0,0,3,55,1,0,0,0,5,60,1,0,0,0,
  	7,71,1,0,0,0,9,78,1,0,0,0,11,84,1,0,0,0,13,90,1,0,0,0,15,95,1,0,0,0,17,
  	104,1,0,0,0,19,114,1,0,0,0,21,121,1,0,0,0,23,125,1,0,0,0,25,129,1,0,0,
  	0,27,134,1,0,0,0,29,141,1,0,0,0,31,147,1,0,0,0,33,154,1,0,0,0,35,161,
  	1,0,0,0,37,167,1,0,0,0,39,169,1,0,0,0,41,171,1,0,0,0,43,173,1,0,0,0,45,
  	183,1,0,0,0,47,188,1,0,0,0,49,50,5,98,0,0,50,51,5,111,0,0,51,52,5,97,
  	0,0,52,53,5,114,0,0,53,54,5,100,0,0,54,2,1,0,0,0,55,56,5,103,0,0,56,57,
  	5,97,0,0,57,58,5,109,0,0,58,59,5,101,0,0,59,4,1,0,0,0,60,61,5,103,0,0,
  	61,62,5,97,0,0,62,63,5,109,0,0,63,64,5,101,0,0,64,65,5,95,0,0,65,66,5,
  	115,0,0,66,67,5,116,0,0,67,68,5,97,0,0,68,69,5,116,0,0,69,70,5,101,0,
  	0,70,6,1,0,0,0,71,72,5,110,0,0,72,73,5,111,0,0,73,74,5,114,0,0,74,75,
  	5,109,0,0,75,76,5,97,0,0,76,77,5,108,0,0,77,8,1,0,0,0,78,79,5,115,0,0,
  	79,80,5,116,0,0,80,81,5,97,0,0,81,82,5,114,0,0,82,83,5,116,0,0,83,10,
  	1,0,0,0,84,85,5,99,0,0,85,86,5,108,0,0,86,87,5,101,0,0,87,88,5,97,0,0,
  	88,89,5,110,0,0,89,12,1,0,0,0,90,91,5,109,0,0,91,92,5,105,0,0,92,93,5,
  	110,0,0,93,94,5,101,0,0,94,14,1,0,0,0,95,96,5,115,0,0,96,97,5,101,0,0,
  	97,98,5,113,0,0,98,99,5,117,0,0,99,100,5,101,0,0,100,101,5,110,0,0,101,
  	102,5,99,0,0,102,103,5,101,0,0,103,16,1,0,0,0,104,105,5,115,0,0,105,106,
  	5,116,0,0,106,107,5,111,0,0,107,108,5,112,0,0,108,109,5,119,0,0,109,110,
  	5,97,0,0,110,111,5,116,0,0,111,112,5,99,0,0,112,113,5,104,0,0,113,18,
  	1,0,0,0,114,115,5,114,0,0,115,116,5,97,0,0,116,117,5,110,0,0,117,118,
  	5,100,0,0,118,119,5,111,0,0,119,120,5,109,0,0,120,20,1,0,0,0,121,122,
  	5,111,0,0,122,123,5,102,0,0,123,124,5,102,0,0,124,22,1,0,0,0,125,126,
  	5,114,0,0,126,127,5,101,0,0,127,128,5,100,0,0,128,24,1,0,0,0,129,130,
  	5,98,0,0,130,131,5,108,0,0,131,132,5,117,0,0,132,133,5,101,0,0,133,26,
  	1,0,0,0,134,135,5,118,0,0,135,136,5,105,0,0,136,137,5,111,0,0,137,138,
  	5,108,0,0,138,139,5,101,0,0,139,140,5,116,0,0,140,28,1,0,0,0,141,142,
  	5,103,0,0,142,143,5,114,0,0,143,144,5,101,0,0,144,145,5,101,0,0,145,146,
  	5,110,0,0,146,30,1,0,0,0,147,148,5,121,0,0,148,149,5,101,0,0,149,150,
  	5,108,0,0,150,151,5,108,0,0,151,152,5,111,0,0,152,153,5,119,0,0,153,32,
  	1,0,0,0,154,155,5,111,0,0,155,156,5,114,0,0,156,157,5,97,0,0,157,158,
  	5,110,0,0,158,159,5,103,0,0,159,160,5,101,0,0,160,34,1,0,0,0,161,162,
  	5,119,0,0,162,163,5,104,0,0,163,164,5,105,0,0,164,165,5,116,0,0,165,166,
  	5,101,0,0,166,36,1,0,0,0,167,168,5,44,0,0,168,38,1,0,0,0,169,170,5,40,
  	0,0,170,40,1,0,0,0,171,172,5,41,0,0,172,42,1,0,0,0,173,177,5,34,0,0,174,
  	176,8,0,0,0,175,174,1,0,0,0,176,179,1,0,0,0,177,175,1,0,0,0,177,178,1,
  	0,0,0,178,180,1,0,0,0,179,177,1,0,0,0,180,181,5,34,0,0,181,44,1,0,0,0,
  	182,184,7,1,0,0,183,182,1,0,0,0,184,185,1,0,0,0,185,183,1,0,0,0,185,186,
  	1,0,0,0,186,46,1,0,0,0,187,189,7,2,0,0,188,187,1,0,0,0,189,190,1,0,0,
  	0,190,188,1,0,0,0,190,191,1,0,0,0,191,192,1,0,0,0,192,193,6,23,0,0,193,
  	48,1,0,0,0,4,0,177,185,190,1,6,0,0
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gamedsllexerLexerStaticData = std::move(staticData);
}

}

GameDSLLexer::GameDSLLexer(CharStream *input) : Lexer(input) {
  GameDSLLexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *gamedsllexerLexerStaticData->atn, gamedsllexerLexerStaticData->decisionToDFA, gamedsllexerLexerStaticData->sharedContextCache);
}

GameDSLLexer::~GameDSLLexer() {
  delete _interpreter;
}

std::string GameDSLLexer::getGrammarFileName() const {
  return "GameDSL.g4";
}

const std::vector<std::string>& GameDSLLexer::getRuleNames() const {
  return gamedsllexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& GameDSLLexer::getChannelNames() const {
  return gamedsllexerLexerStaticData->channelNames;
}

const std::vector<std::string>& GameDSLLexer::getModeNames() const {
  return gamedsllexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& GameDSLLexer::getVocabulary() const {
  return gamedsllexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GameDSLLexer::getSerializedATN() const {
  return gamedsllexerLexerStaticData->serializedATN;
}

const atn::ATN& GameDSLLexer::getATN() const {
  return *gamedsllexerLexerStaticData->atn;
}




void GameDSLLexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  gamedsllexerLexerInitialize();
#else
  ::antlr4::internal::call_once(gamedsllexerLexerOnceFlag, gamedsllexerLexerInitialize);
#endif
}
