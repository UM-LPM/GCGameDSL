
// Generated from GameDSL.g4 by ANTLR 4.13.2


#include "GameDSLListener.h"

#include "GameDSLParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct GameDSLParserStaticData final {
  GameDSLParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  GameDSLParserStaticData(const GameDSLParserStaticData&) = delete;
  GameDSLParserStaticData(GameDSLParserStaticData&&) = delete;
  GameDSLParserStaticData& operator=(const GameDSLParserStaticData&) = delete;
  GameDSLParserStaticData& operator=(GameDSLParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag gamedslParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<GameDSLParserStaticData> gamedslParserStaticData = nullptr;

void gamedslParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (gamedslParserStaticData != nullptr) {
    return;
  }
#else
  assert(gamedslParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<GameDSLParserStaticData>(
    std::vector<std::string>{
      "start", "gameBoard", "sensorXY", "game", "gameState", "gameStateType", 
      "gameTimeType", "stateSelectionType", "sensorState", "color", "gameStateAnnotation", 
      "gameId", "id", "x", "y", "width", "height", "gameStateDuration", 
      "gameDuration"
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
  	4,1,24,134,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,1,0,5,0,43,8,0,
  	10,0,12,0,46,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,5,1,58,8,1,10,
  	1,12,1,61,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,3,1,3,1,3,1,3,1,3,
  	1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,84,8,3,10,3,12,3,87,9,3,1,3,1,3,1,4,1,
  	4,1,4,1,4,1,4,1,4,1,4,4,4,98,8,4,11,4,12,4,99,1,4,1,4,3,4,104,8,4,1,5,
  	1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,10,1,11,1,11,1,12,1,12,1,13,
  	1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,1,17,1,18,1,18,1,18,0,0,19,0,
  	2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,0,4,1,0,4,7,1,0,8,9,
  	2,0,8,8,10,10,1,0,11,18,119,0,38,1,0,0,0,2,49,1,0,0,0,4,62,1,0,0,0,6,
  	70,1,0,0,0,8,90,1,0,0,0,10,105,1,0,0,0,12,107,1,0,0,0,14,109,1,0,0,0,
  	16,111,1,0,0,0,18,113,1,0,0,0,20,115,1,0,0,0,22,117,1,0,0,0,24,119,1,
  	0,0,0,26,121,1,0,0,0,28,123,1,0,0,0,30,125,1,0,0,0,32,127,1,0,0,0,34,
  	129,1,0,0,0,36,131,1,0,0,0,38,39,3,2,1,0,39,44,3,6,3,0,40,41,5,19,0,0,
  	41,43,3,6,3,0,42,40,1,0,0,0,43,46,1,0,0,0,44,42,1,0,0,0,44,45,1,0,0,0,
  	45,47,1,0,0,0,46,44,1,0,0,0,47,48,5,0,0,1,48,1,1,0,0,0,49,50,5,1,0,0,
  	50,51,3,30,15,0,51,52,5,19,0,0,52,53,3,32,16,0,53,54,5,19,0,0,54,59,3,
  	4,2,0,55,56,5,19,0,0,56,58,3,4,2,0,57,55,1,0,0,0,58,61,1,0,0,0,59,57,
  	1,0,0,0,59,60,1,0,0,0,60,3,1,0,0,0,61,59,1,0,0,0,62,63,5,20,0,0,63,64,
  	3,24,12,0,64,65,5,19,0,0,65,66,3,26,13,0,66,67,5,19,0,0,67,68,3,28,14,
  	0,68,69,5,21,0,0,69,5,1,0,0,0,70,71,5,2,0,0,71,72,5,20,0,0,72,73,3,22,
  	11,0,73,74,5,19,0,0,74,75,3,12,6,0,75,76,5,19,0,0,76,77,3,14,7,0,77,78,
  	5,19,0,0,78,79,3,36,18,0,79,80,5,19,0,0,80,85,3,8,4,0,81,82,5,19,0,0,
  	82,84,3,8,4,0,83,81,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,0,0,0,
  	86,88,1,0,0,0,87,85,1,0,0,0,88,89,5,21,0,0,89,7,1,0,0,0,90,91,5,3,0,0,
  	91,92,5,20,0,0,92,93,3,10,5,0,93,94,5,19,0,0,94,97,3,34,17,0,95,96,5,
  	19,0,0,96,98,3,16,8,0,97,95,1,0,0,0,98,99,1,0,0,0,99,97,1,0,0,0,99,100,
  	1,0,0,0,100,101,1,0,0,0,101,103,5,21,0,0,102,104,3,20,10,0,103,102,1,
  	0,0,0,103,104,1,0,0,0,104,9,1,0,0,0,105,106,7,0,0,0,106,11,1,0,0,0,107,
  	108,7,1,0,0,108,13,1,0,0,0,109,110,7,2,0,0,110,15,1,0,0,0,111,112,3,18,
  	9,0,112,17,1,0,0,0,113,114,7,3,0,0,114,19,1,0,0,0,115,116,5,22,0,0,116,
  	21,1,0,0,0,117,118,5,23,0,0,118,23,1,0,0,0,119,120,5,23,0,0,120,25,1,
  	0,0,0,121,122,5,23,0,0,122,27,1,0,0,0,123,124,5,23,0,0,124,29,1,0,0,0,
  	125,126,5,23,0,0,126,31,1,0,0,0,127,128,5,23,0,0,128,33,1,0,0,0,129,130,
  	5,23,0,0,130,35,1,0,0,0,131,132,5,23,0,0,132,37,1,0,0,0,5,44,59,85,99,
  	103
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  gamedslParserStaticData = std::move(staticData);
}

}

GameDSLParser::GameDSLParser(TokenStream *input) : GameDSLParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

GameDSLParser::GameDSLParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  GameDSLParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *gamedslParserStaticData->atn, gamedslParserStaticData->decisionToDFA, gamedslParserStaticData->sharedContextCache, options);
}

GameDSLParser::~GameDSLParser() {
  delete _interpreter;
}

const atn::ATN& GameDSLParser::getATN() const {
  return *gamedslParserStaticData->atn;
}

std::string GameDSLParser::getGrammarFileName() const {
  return "GameDSL.g4";
}

const std::vector<std::string>& GameDSLParser::getRuleNames() const {
  return gamedslParserStaticData->ruleNames;
}

const dfa::Vocabulary& GameDSLParser::getVocabulary() const {
  return gamedslParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView GameDSLParser::getSerializedATN() const {
  return gamedslParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

GameDSLParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GameDSLParser::GameBoardContext* GameDSLParser::StartContext::gameBoard() {
  return getRuleContext<GameDSLParser::GameBoardContext>(0);
}

std::vector<GameDSLParser::GameContext *> GameDSLParser::StartContext::game() {
  return getRuleContexts<GameDSLParser::GameContext>();
}

GameDSLParser::GameContext* GameDSLParser::StartContext::game(size_t i) {
  return getRuleContext<GameDSLParser::GameContext>(i);
}

tree::TerminalNode* GameDSLParser::StartContext::EOF() {
  return getToken(GameDSLParser::EOF, 0);
}

std::vector<tree::TerminalNode *> GameDSLParser::StartContext::COMMA() {
  return getTokens(GameDSLParser::COMMA);
}

tree::TerminalNode* GameDSLParser::StartContext::COMMA(size_t i) {
  return getToken(GameDSLParser::COMMA, i);
}


size_t GameDSLParser::StartContext::getRuleIndex() const {
  return GameDSLParser::RuleStart;
}

void GameDSLParser::StartContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStart(this);
}

void GameDSLParser::StartContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStart(this);
}

GameDSLParser::StartContext* GameDSLParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, GameDSLParser::RuleStart);
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
    setState(38);
    gameBoard();
    setState(39);
    game();
    setState(44);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GameDSLParser::COMMA) {
      setState(40);
      match(GameDSLParser::COMMA);
      setState(41);
      game();
      setState(46);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(47);
    match(GameDSLParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameBoardContext ------------------------------------------------------------------

GameDSLParser::GameBoardContext::GameBoardContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GameDSLParser::WidthContext* GameDSLParser::GameBoardContext::width() {
  return getRuleContext<GameDSLParser::WidthContext>(0);
}

std::vector<tree::TerminalNode *> GameDSLParser::GameBoardContext::COMMA() {
  return getTokens(GameDSLParser::COMMA);
}

tree::TerminalNode* GameDSLParser::GameBoardContext::COMMA(size_t i) {
  return getToken(GameDSLParser::COMMA, i);
}

GameDSLParser::HeightContext* GameDSLParser::GameBoardContext::height() {
  return getRuleContext<GameDSLParser::HeightContext>(0);
}

std::vector<GameDSLParser::SensorXYContext *> GameDSLParser::GameBoardContext::sensorXY() {
  return getRuleContexts<GameDSLParser::SensorXYContext>();
}

GameDSLParser::SensorXYContext* GameDSLParser::GameBoardContext::sensorXY(size_t i) {
  return getRuleContext<GameDSLParser::SensorXYContext>(i);
}


size_t GameDSLParser::GameBoardContext::getRuleIndex() const {
  return GameDSLParser::RuleGameBoard;
}

void GameDSLParser::GameBoardContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameBoard(this);
}

void GameDSLParser::GameBoardContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameBoard(this);
}

GameDSLParser::GameBoardContext* GameDSLParser::gameBoard() {
  GameBoardContext *_localctx = _tracker.createInstance<GameBoardContext>(_ctx, getState());
  enterRule(_localctx, 2, GameDSLParser::RuleGameBoard);
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
    setState(49);
    match(GameDSLParser::T__0);
    setState(50);
    width();
    setState(51);
    match(GameDSLParser::COMMA);
    setState(52);
    height();
    setState(53);
    match(GameDSLParser::COMMA);
    setState(54);
    sensorXY();
    setState(59);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GameDSLParser::COMMA) {
      setState(55);
      match(GameDSLParser::COMMA);
      setState(56);
      sensorXY();
      setState(61);
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

//----------------- SensorXYContext ------------------------------------------------------------------

GameDSLParser::SensorXYContext::SensorXYContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::SensorXYContext::LPAREN() {
  return getToken(GameDSLParser::LPAREN, 0);
}

GameDSLParser::IdContext* GameDSLParser::SensorXYContext::id() {
  return getRuleContext<GameDSLParser::IdContext>(0);
}

std::vector<tree::TerminalNode *> GameDSLParser::SensorXYContext::COMMA() {
  return getTokens(GameDSLParser::COMMA);
}

tree::TerminalNode* GameDSLParser::SensorXYContext::COMMA(size_t i) {
  return getToken(GameDSLParser::COMMA, i);
}

GameDSLParser::XContext* GameDSLParser::SensorXYContext::x() {
  return getRuleContext<GameDSLParser::XContext>(0);
}

GameDSLParser::YContext* GameDSLParser::SensorXYContext::y() {
  return getRuleContext<GameDSLParser::YContext>(0);
}

tree::TerminalNode* GameDSLParser::SensorXYContext::RPAREN() {
  return getToken(GameDSLParser::RPAREN, 0);
}


size_t GameDSLParser::SensorXYContext::getRuleIndex() const {
  return GameDSLParser::RuleSensorXY;
}

void GameDSLParser::SensorXYContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSensorXY(this);
}

void GameDSLParser::SensorXYContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSensorXY(this);
}

GameDSLParser::SensorXYContext* GameDSLParser::sensorXY() {
  SensorXYContext *_localctx = _tracker.createInstance<SensorXYContext>(_ctx, getState());
  enterRule(_localctx, 4, GameDSLParser::RuleSensorXY);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(62);
    match(GameDSLParser::LPAREN);
    setState(63);
    id();
    setState(64);
    match(GameDSLParser::COMMA);
    setState(65);
    x();
    setState(66);
    match(GameDSLParser::COMMA);
    setState(67);
    y();
    setState(68);
    match(GameDSLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameContext ------------------------------------------------------------------

GameDSLParser::GameContext::GameContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::GameContext::LPAREN() {
  return getToken(GameDSLParser::LPAREN, 0);
}

GameDSLParser::GameIdContext* GameDSLParser::GameContext::gameId() {
  return getRuleContext<GameDSLParser::GameIdContext>(0);
}

std::vector<tree::TerminalNode *> GameDSLParser::GameContext::COMMA() {
  return getTokens(GameDSLParser::COMMA);
}

tree::TerminalNode* GameDSLParser::GameContext::COMMA(size_t i) {
  return getToken(GameDSLParser::COMMA, i);
}

GameDSLParser::GameTimeTypeContext* GameDSLParser::GameContext::gameTimeType() {
  return getRuleContext<GameDSLParser::GameTimeTypeContext>(0);
}

GameDSLParser::StateSelectionTypeContext* GameDSLParser::GameContext::stateSelectionType() {
  return getRuleContext<GameDSLParser::StateSelectionTypeContext>(0);
}

GameDSLParser::GameDurationContext* GameDSLParser::GameContext::gameDuration() {
  return getRuleContext<GameDSLParser::GameDurationContext>(0);
}

std::vector<GameDSLParser::GameStateContext *> GameDSLParser::GameContext::gameState() {
  return getRuleContexts<GameDSLParser::GameStateContext>();
}

GameDSLParser::GameStateContext* GameDSLParser::GameContext::gameState(size_t i) {
  return getRuleContext<GameDSLParser::GameStateContext>(i);
}

tree::TerminalNode* GameDSLParser::GameContext::RPAREN() {
  return getToken(GameDSLParser::RPAREN, 0);
}


size_t GameDSLParser::GameContext::getRuleIndex() const {
  return GameDSLParser::RuleGame;
}

void GameDSLParser::GameContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGame(this);
}

void GameDSLParser::GameContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGame(this);
}

GameDSLParser::GameContext* GameDSLParser::game() {
  GameContext *_localctx = _tracker.createInstance<GameContext>(_ctx, getState());
  enterRule(_localctx, 6, GameDSLParser::RuleGame);
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
    setState(70);
    match(GameDSLParser::T__1);
    setState(71);
    match(GameDSLParser::LPAREN);
    setState(72);
    gameId();
    setState(73);
    match(GameDSLParser::COMMA);
    setState(74);
    gameTimeType();
    setState(75);
    match(GameDSLParser::COMMA);
    setState(76);
    stateSelectionType();
    setState(77);
    match(GameDSLParser::COMMA);
    setState(78);
    gameDuration();
    setState(79);
    match(GameDSLParser::COMMA);
    setState(80);
    gameState();
    setState(85);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == GameDSLParser::COMMA) {
      setState(81);
      match(GameDSLParser::COMMA);
      setState(82);
      gameState();
      setState(87);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
    setState(88);
    match(GameDSLParser::RPAREN);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameStateContext ------------------------------------------------------------------

GameDSLParser::GameStateContext::GameStateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::GameStateContext::LPAREN() {
  return getToken(GameDSLParser::LPAREN, 0);
}

GameDSLParser::GameStateTypeContext* GameDSLParser::GameStateContext::gameStateType() {
  return getRuleContext<GameDSLParser::GameStateTypeContext>(0);
}

std::vector<tree::TerminalNode *> GameDSLParser::GameStateContext::COMMA() {
  return getTokens(GameDSLParser::COMMA);
}

tree::TerminalNode* GameDSLParser::GameStateContext::COMMA(size_t i) {
  return getToken(GameDSLParser::COMMA, i);
}

GameDSLParser::GameStateDurationContext* GameDSLParser::GameStateContext::gameStateDuration() {
  return getRuleContext<GameDSLParser::GameStateDurationContext>(0);
}

tree::TerminalNode* GameDSLParser::GameStateContext::RPAREN() {
  return getToken(GameDSLParser::RPAREN, 0);
}

std::vector<GameDSLParser::SensorStateContext *> GameDSLParser::GameStateContext::sensorState() {
  return getRuleContexts<GameDSLParser::SensorStateContext>();
}

GameDSLParser::SensorStateContext* GameDSLParser::GameStateContext::sensorState(size_t i) {
  return getRuleContext<GameDSLParser::SensorStateContext>(i);
}

GameDSLParser::GameStateAnnotationContext* GameDSLParser::GameStateContext::gameStateAnnotation() {
  return getRuleContext<GameDSLParser::GameStateAnnotationContext>(0);
}


size_t GameDSLParser::GameStateContext::getRuleIndex() const {
  return GameDSLParser::RuleGameState;
}

void GameDSLParser::GameStateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameState(this);
}

void GameDSLParser::GameStateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameState(this);
}

GameDSLParser::GameStateContext* GameDSLParser::gameState() {
  GameStateContext *_localctx = _tracker.createInstance<GameStateContext>(_ctx, getState());
  enterRule(_localctx, 8, GameDSLParser::RuleGameState);
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
    setState(90);
    match(GameDSLParser::T__2);
    setState(91);
    match(GameDSLParser::LPAREN);
    setState(92);
    gameStateType();
    setState(93);
    match(GameDSLParser::COMMA);
    setState(94);
    gameStateDuration();
    setState(97); 
    _errHandler->sync(this);
    _la = _input->LA(1);
    do {
      setState(95);
      match(GameDSLParser::COMMA);
      setState(96);
      sensorState();
      setState(99); 
      _errHandler->sync(this);
      _la = _input->LA(1);
    } while (_la == GameDSLParser::COMMA);
    setState(101);
    match(GameDSLParser::RPAREN);
    setState(103);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == GameDSLParser::STRING) {
      setState(102);
      gameStateAnnotation();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameStateTypeContext ------------------------------------------------------------------

GameDSLParser::GameStateTypeContext::GameStateTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GameDSLParser::GameStateTypeContext::getRuleIndex() const {
  return GameDSLParser::RuleGameStateType;
}

void GameDSLParser::GameStateTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameStateType(this);
}

void GameDSLParser::GameStateTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameStateType(this);
}

GameDSLParser::GameStateTypeContext* GameDSLParser::gameStateType() {
  GameStateTypeContext *_localctx = _tracker.createInstance<GameStateTypeContext>(_ctx, getState());
  enterRule(_localctx, 10, GameDSLParser::RuleGameStateType);
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
    setState(105);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 240) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameTimeTypeContext ------------------------------------------------------------------

GameDSLParser::GameTimeTypeContext::GameTimeTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GameDSLParser::GameTimeTypeContext::getRuleIndex() const {
  return GameDSLParser::RuleGameTimeType;
}

void GameDSLParser::GameTimeTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameTimeType(this);
}

void GameDSLParser::GameTimeTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameTimeType(this);
}

GameDSLParser::GameTimeTypeContext* GameDSLParser::gameTimeType() {
  GameTimeTypeContext *_localctx = _tracker.createInstance<GameTimeTypeContext>(_ctx, getState());
  enterRule(_localctx, 12, GameDSLParser::RuleGameTimeType);
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
    setState(107);
    _la = _input->LA(1);
    if (!(_la == GameDSLParser::T__7

    || _la == GameDSLParser::T__8)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- StateSelectionTypeContext ------------------------------------------------------------------

GameDSLParser::StateSelectionTypeContext::StateSelectionTypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GameDSLParser::StateSelectionTypeContext::getRuleIndex() const {
  return GameDSLParser::RuleStateSelectionType;
}

void GameDSLParser::StateSelectionTypeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStateSelectionType(this);
}

void GameDSLParser::StateSelectionTypeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStateSelectionType(this);
}

GameDSLParser::StateSelectionTypeContext* GameDSLParser::stateSelectionType() {
  StateSelectionTypeContext *_localctx = _tracker.createInstance<StateSelectionTypeContext>(_ctx, getState());
  enterRule(_localctx, 14, GameDSLParser::RuleStateSelectionType);
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
    setState(109);
    _la = _input->LA(1);
    if (!(_la == GameDSLParser::T__7

    || _la == GameDSLParser::T__9)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SensorStateContext ------------------------------------------------------------------

GameDSLParser::SensorStateContext::SensorStateContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

GameDSLParser::ColorContext* GameDSLParser::SensorStateContext::color() {
  return getRuleContext<GameDSLParser::ColorContext>(0);
}


size_t GameDSLParser::SensorStateContext::getRuleIndex() const {
  return GameDSLParser::RuleSensorState;
}

void GameDSLParser::SensorStateContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSensorState(this);
}

void GameDSLParser::SensorStateContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSensorState(this);
}

GameDSLParser::SensorStateContext* GameDSLParser::sensorState() {
  SensorStateContext *_localctx = _tracker.createInstance<SensorStateContext>(_ctx, getState());
  enterRule(_localctx, 16, GameDSLParser::RuleSensorState);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(111);
    color();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ColorContext ------------------------------------------------------------------

GameDSLParser::ColorContext::ColorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t GameDSLParser::ColorContext::getRuleIndex() const {
  return GameDSLParser::RuleColor;
}

void GameDSLParser::ColorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterColor(this);
}

void GameDSLParser::ColorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitColor(this);
}

GameDSLParser::ColorContext* GameDSLParser::color() {
  ColorContext *_localctx = _tracker.createInstance<ColorContext>(_ctx, getState());
  enterRule(_localctx, 18, GameDSLParser::RuleColor);
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
    setState(113);
    _la = _input->LA(1);
    if (!((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 522240) != 0))) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameStateAnnotationContext ------------------------------------------------------------------

GameDSLParser::GameStateAnnotationContext::GameStateAnnotationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::GameStateAnnotationContext::STRING() {
  return getToken(GameDSLParser::STRING, 0);
}


size_t GameDSLParser::GameStateAnnotationContext::getRuleIndex() const {
  return GameDSLParser::RuleGameStateAnnotation;
}

void GameDSLParser::GameStateAnnotationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameStateAnnotation(this);
}

void GameDSLParser::GameStateAnnotationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameStateAnnotation(this);
}

GameDSLParser::GameStateAnnotationContext* GameDSLParser::gameStateAnnotation() {
  GameStateAnnotationContext *_localctx = _tracker.createInstance<GameStateAnnotationContext>(_ctx, getState());
  enterRule(_localctx, 20, GameDSLParser::RuleGameStateAnnotation);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(115);
    match(GameDSLParser::STRING);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameIdContext ------------------------------------------------------------------

GameDSLParser::GameIdContext::GameIdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::GameIdContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::GameIdContext::getRuleIndex() const {
  return GameDSLParser::RuleGameId;
}

void GameDSLParser::GameIdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameId(this);
}

void GameDSLParser::GameIdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameId(this);
}

GameDSLParser::GameIdContext* GameDSLParser::gameId() {
  GameIdContext *_localctx = _tracker.createInstance<GameIdContext>(_ctx, getState());
  enterRule(_localctx, 22, GameDSLParser::RuleGameId);

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
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IdContext ------------------------------------------------------------------

GameDSLParser::IdContext::IdContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::IdContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::IdContext::getRuleIndex() const {
  return GameDSLParser::RuleId;
}

void GameDSLParser::IdContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterId(this);
}

void GameDSLParser::IdContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitId(this);
}

GameDSLParser::IdContext* GameDSLParser::id() {
  IdContext *_localctx = _tracker.createInstance<IdContext>(_ctx, getState());
  enterRule(_localctx, 24, GameDSLParser::RuleId);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(119);
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- XContext ------------------------------------------------------------------

GameDSLParser::XContext::XContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::XContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::XContext::getRuleIndex() const {
  return GameDSLParser::RuleX;
}

void GameDSLParser::XContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterX(this);
}

void GameDSLParser::XContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitX(this);
}

GameDSLParser::XContext* GameDSLParser::x() {
  XContext *_localctx = _tracker.createInstance<XContext>(_ctx, getState());
  enterRule(_localctx, 26, GameDSLParser::RuleX);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(121);
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- YContext ------------------------------------------------------------------

GameDSLParser::YContext::YContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::YContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::YContext::getRuleIndex() const {
  return GameDSLParser::RuleY;
}

void GameDSLParser::YContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterY(this);
}

void GameDSLParser::YContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitY(this);
}

GameDSLParser::YContext* GameDSLParser::y() {
  YContext *_localctx = _tracker.createInstance<YContext>(_ctx, getState());
  enterRule(_localctx, 28, GameDSLParser::RuleY);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(123);
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WidthContext ------------------------------------------------------------------

GameDSLParser::WidthContext::WidthContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::WidthContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::WidthContext::getRuleIndex() const {
  return GameDSLParser::RuleWidth;
}

void GameDSLParser::WidthContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWidth(this);
}

void GameDSLParser::WidthContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWidth(this);
}

GameDSLParser::WidthContext* GameDSLParser::width() {
  WidthContext *_localctx = _tracker.createInstance<WidthContext>(_ctx, getState());
  enterRule(_localctx, 30, GameDSLParser::RuleWidth);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(125);
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- HeightContext ------------------------------------------------------------------

GameDSLParser::HeightContext::HeightContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::HeightContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::HeightContext::getRuleIndex() const {
  return GameDSLParser::RuleHeight;
}

void GameDSLParser::HeightContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterHeight(this);
}

void GameDSLParser::HeightContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitHeight(this);
}

GameDSLParser::HeightContext* GameDSLParser::height() {
  HeightContext *_localctx = _tracker.createInstance<HeightContext>(_ctx, getState());
  enterRule(_localctx, 32, GameDSLParser::RuleHeight);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(127);
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameStateDurationContext ------------------------------------------------------------------

GameDSLParser::GameStateDurationContext::GameStateDurationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::GameStateDurationContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::GameStateDurationContext::getRuleIndex() const {
  return GameDSLParser::RuleGameStateDuration;
}

void GameDSLParser::GameStateDurationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameStateDuration(this);
}

void GameDSLParser::GameStateDurationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameStateDuration(this);
}

GameDSLParser::GameStateDurationContext* GameDSLParser::gameStateDuration() {
  GameStateDurationContext *_localctx = _tracker.createInstance<GameStateDurationContext>(_ctx, getState());
  enterRule(_localctx, 34, GameDSLParser::RuleGameStateDuration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GameDurationContext ------------------------------------------------------------------

GameDSLParser::GameDurationContext::GameDurationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* GameDSLParser::GameDurationContext::NUMBER() {
  return getToken(GameDSLParser::NUMBER, 0);
}


size_t GameDSLParser::GameDurationContext::getRuleIndex() const {
  return GameDSLParser::RuleGameDuration;
}

void GameDSLParser::GameDurationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGameDuration(this);
}

void GameDSLParser::GameDurationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<GameDSLListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGameDuration(this);
}

GameDSLParser::GameDurationContext* GameDSLParser::gameDuration() {
  GameDurationContext *_localctx = _tracker.createInstance<GameDurationContext>(_ctx, getState());
  enterRule(_localctx, 36, GameDSLParser::RuleGameDuration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(131);
    match(GameDSLParser::NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

void GameDSLParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  gamedslParserInitialize();
#else
  ::antlr4::internal::call_once(gamedslParserOnceFlag, gamedslParserInitialize);
#endif
}
