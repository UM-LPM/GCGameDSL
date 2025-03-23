
// Generated from GameDSL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GameDSLListener.h"


/**
 * This class provides an empty implementation of GameDSLListener,
 * which can be extended to create a listener which only needs to handle a subset
 * of the available methods.
 */
class  GameDSLBaseListener : public GameDSLListener {
public:

  virtual void enterStart(GameDSLParser::StartContext * /*ctx*/) override { }
  virtual void exitStart(GameDSLParser::StartContext * /*ctx*/) override { }

  virtual void enterGameBoard(GameDSLParser::GameBoardContext * /*ctx*/) override { }
  virtual void exitGameBoard(GameDSLParser::GameBoardContext * /*ctx*/) override { }

  virtual void enterSensorXY(GameDSLParser::SensorXYContext * /*ctx*/) override { }
  virtual void exitSensorXY(GameDSLParser::SensorXYContext * /*ctx*/) override { }

  virtual void enterGame(GameDSLParser::GameContext * /*ctx*/) override { }
  virtual void exitGame(GameDSLParser::GameContext * /*ctx*/) override { }

  virtual void enterGameState(GameDSLParser::GameStateContext * /*ctx*/) override { }
  virtual void exitGameState(GameDSLParser::GameStateContext * /*ctx*/) override { }

  virtual void enterGameStateType(GameDSLParser::GameStateTypeContext * /*ctx*/) override { }
  virtual void exitGameStateType(GameDSLParser::GameStateTypeContext * /*ctx*/) override { }

  virtual void enterGameTimeType(GameDSLParser::GameTimeTypeContext * /*ctx*/) override { }
  virtual void exitGameTimeType(GameDSLParser::GameTimeTypeContext * /*ctx*/) override { }

  virtual void enterStateSelectionType(GameDSLParser::StateSelectionTypeContext * /*ctx*/) override { }
  virtual void exitStateSelectionType(GameDSLParser::StateSelectionTypeContext * /*ctx*/) override { }

  virtual void enterSensorState(GameDSLParser::SensorStateContext * /*ctx*/) override { }
  virtual void exitSensorState(GameDSLParser::SensorStateContext * /*ctx*/) override { }

  virtual void enterColor(GameDSLParser::ColorContext * /*ctx*/) override { }
  virtual void exitColor(GameDSLParser::ColorContext * /*ctx*/) override { }

  virtual void enterGameStateAnnotation(GameDSLParser::GameStateAnnotationContext * /*ctx*/) override { }
  virtual void exitGameStateAnnotation(GameDSLParser::GameStateAnnotationContext * /*ctx*/) override { }

  virtual void enterGameId(GameDSLParser::GameIdContext * /*ctx*/) override { }
  virtual void exitGameId(GameDSLParser::GameIdContext * /*ctx*/) override { }

  virtual void enterId(GameDSLParser::IdContext * /*ctx*/) override { }
  virtual void exitId(GameDSLParser::IdContext * /*ctx*/) override { }

  virtual void enterX(GameDSLParser::XContext * /*ctx*/) override { }
  virtual void exitX(GameDSLParser::XContext * /*ctx*/) override { }

  virtual void enterY(GameDSLParser::YContext * /*ctx*/) override { }
  virtual void exitY(GameDSLParser::YContext * /*ctx*/) override { }

  virtual void enterWidth(GameDSLParser::WidthContext * /*ctx*/) override { }
  virtual void exitWidth(GameDSLParser::WidthContext * /*ctx*/) override { }

  virtual void enterHeight(GameDSLParser::HeightContext * /*ctx*/) override { }
  virtual void exitHeight(GameDSLParser::HeightContext * /*ctx*/) override { }

  virtual void enterGameStateDuration(GameDSLParser::GameStateDurationContext * /*ctx*/) override { }
  virtual void exitGameStateDuration(GameDSLParser::GameStateDurationContext * /*ctx*/) override { }

  virtual void enterGameDuration(GameDSLParser::GameDurationContext * /*ctx*/) override { }
  virtual void exitGameDuration(GameDSLParser::GameDurationContext * /*ctx*/) override { }


  virtual void enterEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void exitEveryRule(antlr4::ParserRuleContext * /*ctx*/) override { }
  virtual void visitTerminal(antlr4::tree::TerminalNode * /*node*/) override { }
  virtual void visitErrorNode(antlr4::tree::ErrorNode * /*node*/) override { }

};

