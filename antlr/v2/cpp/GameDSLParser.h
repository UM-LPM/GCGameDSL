
// Generated from GameDSL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"




class  GameDSLParser : public antlr4::Parser {
public:
  enum {
    T__0 = 1, T__1 = 2, T__2 = 3, T__3 = 4, T__4 = 5, T__5 = 6, T__6 = 7, 
    T__7 = 8, T__8 = 9, T__9 = 10, T__10 = 11, T__11 = 12, T__12 = 13, T__13 = 14, 
    T__14 = 15, T__15 = 16, T__16 = 17, T__17 = 18, COMMA = 19, LPAREN = 20, 
    RPAREN = 21, STRING = 22, NUMBER = 23, WS = 24
  };

  enum {
    RuleStart = 0, RuleGameBoard = 1, RuleSensorXY = 2, RuleGame = 3, RuleGameState = 4, 
    RuleGameStateType = 5, RuleGameTimeType = 6, RuleStateSelectionType = 7, 
    RuleSensorState = 8, RuleColor = 9, RuleGameStateAnnotation = 10, RuleGameId = 11, 
    RuleId = 12, RuleX = 13, RuleY = 14, RuleWidth = 15, RuleHeight = 16, 
    RuleGameStateDuration = 17, RuleGameDuration = 18
  };

  explicit GameDSLParser(antlr4::TokenStream *input);

  GameDSLParser(antlr4::TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options);

  ~GameDSLParser() override;

  std::string getGrammarFileName() const override;

  const antlr4::atn::ATN& getATN() const override;

  const std::vector<std::string>& getRuleNames() const override;

  const antlr4::dfa::Vocabulary& getVocabulary() const override;

  antlr4::atn::SerializedATNView getSerializedATN() const override;


  class StartContext;
  class GameBoardContext;
  class SensorXYContext;
  class GameContext;
  class GameStateContext;
  class GameStateTypeContext;
  class GameTimeTypeContext;
  class StateSelectionTypeContext;
  class SensorStateContext;
  class ColorContext;
  class GameStateAnnotationContext;
  class GameIdContext;
  class IdContext;
  class XContext;
  class YContext;
  class WidthContext;
  class HeightContext;
  class GameStateDurationContext;
  class GameDurationContext; 

  class  StartContext : public antlr4::ParserRuleContext {
  public:
    StartContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    GameBoardContext *gameBoard();
    std::vector<GameContext *> game();
    GameContext* game(size_t i);
    antlr4::tree::TerminalNode *EOF();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StartContext* start();

  class  GameBoardContext : public antlr4::ParserRuleContext {
  public:
    GameBoardContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    WidthContext *width();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    HeightContext *height();
    std::vector<SensorXYContext *> sensorXY();
    SensorXYContext* sensorXY(size_t i);

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameBoardContext* gameBoard();

  class  SensorXYContext : public antlr4::ParserRuleContext {
  public:
    SensorXYContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    IdContext *id();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    XContext *x();
    YContext *y();
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SensorXYContext* sensorXY();

  class  GameContext : public antlr4::ParserRuleContext {
  public:
    GameContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    GameIdContext *gameId();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    GameTimeTypeContext *gameTimeType();
    StateSelectionTypeContext *stateSelectionType();
    GameDurationContext *gameDuration();
    std::vector<GameStateContext *> gameState();
    GameStateContext* gameState(size_t i);
    antlr4::tree::TerminalNode *RPAREN();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameContext* game();

  class  GameStateContext : public antlr4::ParserRuleContext {
  public:
    GameStateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *LPAREN();
    GameStateTypeContext *gameStateType();
    std::vector<antlr4::tree::TerminalNode *> COMMA();
    antlr4::tree::TerminalNode* COMMA(size_t i);
    GameStateDurationContext *gameStateDuration();
    antlr4::tree::TerminalNode *RPAREN();
    std::vector<SensorStateContext *> sensorState();
    SensorStateContext* sensorState(size_t i);
    GameStateAnnotationContext *gameStateAnnotation();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameStateContext* gameState();

  class  GameStateTypeContext : public antlr4::ParserRuleContext {
  public:
    GameStateTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameStateTypeContext* gameStateType();

  class  GameTimeTypeContext : public antlr4::ParserRuleContext {
  public:
    GameTimeTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameTimeTypeContext* gameTimeType();

  class  StateSelectionTypeContext : public antlr4::ParserRuleContext {
  public:
    StateSelectionTypeContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  StateSelectionTypeContext* stateSelectionType();

  class  SensorStateContext : public antlr4::ParserRuleContext {
  public:
    SensorStateContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    ColorContext *color();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  SensorStateContext* sensorState();

  class  ColorContext : public antlr4::ParserRuleContext {
  public:
    ColorContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  ColorContext* color();

  class  GameStateAnnotationContext : public antlr4::ParserRuleContext {
  public:
    GameStateAnnotationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *STRING();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameStateAnnotationContext* gameStateAnnotation();

  class  GameIdContext : public antlr4::ParserRuleContext {
  public:
    GameIdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameIdContext* gameId();

  class  IdContext : public antlr4::ParserRuleContext {
  public:
    IdContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  IdContext* id();

  class  XContext : public antlr4::ParserRuleContext {
  public:
    XContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  XContext* x();

  class  YContext : public antlr4::ParserRuleContext {
  public:
    YContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  YContext* y();

  class  WidthContext : public antlr4::ParserRuleContext {
  public:
    WidthContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  WidthContext* width();

  class  HeightContext : public antlr4::ParserRuleContext {
  public:
    HeightContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  HeightContext* height();

  class  GameStateDurationContext : public antlr4::ParserRuleContext {
  public:
    GameStateDurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameStateDurationContext* gameStateDuration();

  class  GameDurationContext : public antlr4::ParserRuleContext {
  public:
    GameDurationContext(antlr4::ParserRuleContext *parent, size_t invokingState);
    virtual size_t getRuleIndex() const override;
    antlr4::tree::TerminalNode *NUMBER();

    virtual void enterRule(antlr4::tree::ParseTreeListener *listener) override;
    virtual void exitRule(antlr4::tree::ParseTreeListener *listener) override;
   
  };

  GameDurationContext* gameDuration();


  // By default the static state used to implement the parser is lazily initialized during the first
  // call to the constructor. You can call this function if you wish to initialize the static state
  // ahead of time.
  static void initialize();

private:
};

