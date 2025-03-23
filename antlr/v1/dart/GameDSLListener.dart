// Generated from GameDSL.g4 by ANTLR 4.13.2
// ignore_for_file: unused_import, unused_local_variable, prefer_single_quotes
import 'package:antlr4/antlr4.dart';

import 'GameDSLParser.dart';

/// This abstract class defines a complete listener for a parse tree produced by
/// [GameDSLParser].
abstract class GameDSLListener extends ParseTreeListener {
  /// Enter a parse tree produced by [GameDSLParser.start].
  /// [ctx] the parse tree
  void enterStart(StartContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.start].
  /// [ctx] the parse tree
  void exitStart(StartContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.gameBoard].
  /// [ctx] the parse tree
  void enterGameBoard(GameBoardContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.gameBoard].
  /// [ctx] the parse tree
  void exitGameBoard(GameBoardContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.sensorXY].
  /// [ctx] the parse tree
  void enterSensorXY(SensorXYContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.sensorXY].
  /// [ctx] the parse tree
  void exitSensorXY(SensorXYContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.game].
  /// [ctx] the parse tree
  void enterGame(GameContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.game].
  /// [ctx] the parse tree
  void exitGame(GameContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.gameState].
  /// [ctx] the parse tree
  void enterGameState(GameStateContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.gameState].
  /// [ctx] the parse tree
  void exitGameState(GameStateContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.gameStateType].
  /// [ctx] the parse tree
  void enterGameStateType(GameStateTypeContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.gameStateType].
  /// [ctx] the parse tree
  void exitGameStateType(GameStateTypeContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.gameTimeType].
  /// [ctx] the parse tree
  void enterGameTimeType(GameTimeTypeContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.gameTimeType].
  /// [ctx] the parse tree
  void exitGameTimeType(GameTimeTypeContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.stateSelectionType].
  /// [ctx] the parse tree
  void enterStateSelectionType(StateSelectionTypeContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.stateSelectionType].
  /// [ctx] the parse tree
  void exitStateSelectionType(StateSelectionTypeContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.sensorState].
  /// [ctx] the parse tree
  void enterSensorState(SensorStateContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.sensorState].
  /// [ctx] the parse tree
  void exitSensorState(SensorStateContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.color].
  /// [ctx] the parse tree
  void enterColor(ColorContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.color].
  /// [ctx] the parse tree
  void exitColor(ColorContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.gameId].
  /// [ctx] the parse tree
  void enterGameId(GameIdContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.gameId].
  /// [ctx] the parse tree
  void exitGameId(GameIdContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.id].
  /// [ctx] the parse tree
  void enterId(IdContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.id].
  /// [ctx] the parse tree
  void exitId(IdContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.x].
  /// [ctx] the parse tree
  void enterX(XContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.x].
  /// [ctx] the parse tree
  void exitX(XContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.y].
  /// [ctx] the parse tree
  void enterY(YContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.y].
  /// [ctx] the parse tree
  void exitY(YContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.width].
  /// [ctx] the parse tree
  void enterWidth(WidthContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.width].
  /// [ctx] the parse tree
  void exitWidth(WidthContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.height].
  /// [ctx] the parse tree
  void enterHeight(HeightContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.height].
  /// [ctx] the parse tree
  void exitHeight(HeightContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.gameStateDuration].
  /// [ctx] the parse tree
  void enterGameStateDuration(GameStateDurationContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.gameStateDuration].
  /// [ctx] the parse tree
  void exitGameStateDuration(GameStateDurationContext ctx);

  /// Enter a parse tree produced by [GameDSLParser.gameDuration].
  /// [ctx] the parse tree
  void enterGameDuration(GameDurationContext ctx);
  /// Exit a parse tree produced by [GameDSLParser.gameDuration].
  /// [ctx] the parse tree
  void exitGameDuration(GameDurationContext ctx);
}