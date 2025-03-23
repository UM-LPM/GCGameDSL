
// Generated from GameDSL.g4 by ANTLR 4.13.2

#pragma once


#include "antlr4-runtime.h"
#include "GameDSLParser.h"


/**
 * This interface defines an abstract listener for a parse tree produced by GameDSLParser.
 */
class  GameDSLListener : public antlr4::tree::ParseTreeListener {
public:

  virtual void enterStart(GameDSLParser::StartContext *ctx) = 0;
  virtual void exitStart(GameDSLParser::StartContext *ctx) = 0;

  virtual void enterGameBoard(GameDSLParser::GameBoardContext *ctx) = 0;
  virtual void exitGameBoard(GameDSLParser::GameBoardContext *ctx) = 0;

  virtual void enterSensorXY(GameDSLParser::SensorXYContext *ctx) = 0;
  virtual void exitSensorXY(GameDSLParser::SensorXYContext *ctx) = 0;

  virtual void enterGame(GameDSLParser::GameContext *ctx) = 0;
  virtual void exitGame(GameDSLParser::GameContext *ctx) = 0;

  virtual void enterGameState(GameDSLParser::GameStateContext *ctx) = 0;
  virtual void exitGameState(GameDSLParser::GameStateContext *ctx) = 0;

  virtual void enterGameStateType(GameDSLParser::GameStateTypeContext *ctx) = 0;
  virtual void exitGameStateType(GameDSLParser::GameStateTypeContext *ctx) = 0;

  virtual void enterGameTimeType(GameDSLParser::GameTimeTypeContext *ctx) = 0;
  virtual void exitGameTimeType(GameDSLParser::GameTimeTypeContext *ctx) = 0;

  virtual void enterStateSelectionType(GameDSLParser::StateSelectionTypeContext *ctx) = 0;
  virtual void exitStateSelectionType(GameDSLParser::StateSelectionTypeContext *ctx) = 0;

  virtual void enterSensorState(GameDSLParser::SensorStateContext *ctx) = 0;
  virtual void exitSensorState(GameDSLParser::SensorStateContext *ctx) = 0;

  virtual void enterColor(GameDSLParser::ColorContext *ctx) = 0;
  virtual void exitColor(GameDSLParser::ColorContext *ctx) = 0;

  virtual void enterGameStateAnnotation(GameDSLParser::GameStateAnnotationContext *ctx) = 0;
  virtual void exitGameStateAnnotation(GameDSLParser::GameStateAnnotationContext *ctx) = 0;

  virtual void enterGameId(GameDSLParser::GameIdContext *ctx) = 0;
  virtual void exitGameId(GameDSLParser::GameIdContext *ctx) = 0;

  virtual void enterId(GameDSLParser::IdContext *ctx) = 0;
  virtual void exitId(GameDSLParser::IdContext *ctx) = 0;

  virtual void enterX(GameDSLParser::XContext *ctx) = 0;
  virtual void exitX(GameDSLParser::XContext *ctx) = 0;

  virtual void enterY(GameDSLParser::YContext *ctx) = 0;
  virtual void exitY(GameDSLParser::YContext *ctx) = 0;

  virtual void enterWidth(GameDSLParser::WidthContext *ctx) = 0;
  virtual void exitWidth(GameDSLParser::WidthContext *ctx) = 0;

  virtual void enterHeight(GameDSLParser::HeightContext *ctx) = 0;
  virtual void exitHeight(GameDSLParser::HeightContext *ctx) = 0;

  virtual void enterGameStateDuration(GameDSLParser::GameStateDurationContext *ctx) = 0;
  virtual void exitGameStateDuration(GameDSLParser::GameStateDurationContext *ctx) = 0;

  virtual void enterGameDuration(GameDSLParser::GameDurationContext *ctx) = 0;
  virtual void exitGameDuration(GameDSLParser::GameDurationContext *ctx) = 0;


};

