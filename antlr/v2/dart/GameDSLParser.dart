// Generated from GameDSL.g4 by ANTLR 4.13.2
// ignore_for_file: unused_import, unused_local_variable, prefer_single_quotes
import 'package:antlr4/antlr4.dart';

import 'GameDSLListener.dart';
import 'GameDSLBaseListener.dart';
const int RULE_start = 0, RULE_gameBoard = 1, RULE_sensorXY = 2, RULE_game = 3, 
          RULE_gameState = 4, RULE_gameStateType = 5, RULE_gameTimeType = 6, 
          RULE_stateSelectionType = 7, RULE_sensorState = 8, RULE_color = 9, 
          RULE_gameStateAnnotation = 10, RULE_gameId = 11, RULE_id = 12, 
          RULE_x = 13, RULE_y = 14, RULE_width = 15, RULE_height = 16, RULE_gameStateDuration = 17, 
          RULE_gameDuration = 18;
class GameDSLParser extends Parser {
  static final checkVersion = () => RuntimeMetaData.checkVersion('4.13.2', RuntimeMetaData.VERSION);
  static const int TOKEN_EOF = IntStream.EOF;

  static final List<DFA> _decisionToDFA = List.generate(
      _ATN.numberOfDecisions, (i) => DFA(_ATN.getDecisionState(i), i));
  static final PredictionContextCache _sharedContextCache = PredictionContextCache();
  static const int TOKEN_T__0 = 1, TOKEN_T__1 = 2, TOKEN_T__2 = 3, TOKEN_T__3 = 4, 
                   TOKEN_T__4 = 5, TOKEN_T__5 = 6, TOKEN_T__6 = 7, TOKEN_T__7 = 8, 
                   TOKEN_T__8 = 9, TOKEN_T__9 = 10, TOKEN_T__10 = 11, TOKEN_T__11 = 12, 
                   TOKEN_T__12 = 13, TOKEN_T__13 = 14, TOKEN_T__14 = 15, 
                   TOKEN_T__15 = 16, TOKEN_T__16 = 17, TOKEN_T__17 = 18, 
                   TOKEN_COMMA = 19, TOKEN_LPAREN = 20, TOKEN_RPAREN = 21, 
                   TOKEN_STRING = 22, TOKEN_NUMBER = 23, TOKEN_WS = 24;

  @override
  final List<String> ruleNames = [
    'start', 'gameBoard', 'sensorXY', 'game', 'gameState', 'gameStateType', 
    'gameTimeType', 'stateSelectionType', 'sensorState', 'color', 'gameStateAnnotation', 
    'gameId', 'id', 'x', 'y', 'width', 'height', 'gameStateDuration', 'gameDuration'
  ];

  static final List<String?> _LITERAL_NAMES = [
      null, "'board'", "'game'", "'game_state'", "'normal'", "'start'", 
      "'clean'", "'mine'", "'sequence'", "'stopwatch'", "'random'", "'off'", 
      "'red'", "'blue'", "'violet'", "'green'", "'yellow'", "'orange'", 
      "'white'", "','", "'('", "')'"
  ];
  static final List<String?> _SYMBOLIC_NAMES = [
      null, null, null, null, null, null, null, null, null, null, null, 
      null, null, null, null, null, null, null, null, "COMMA", "LPAREN", 
      "RPAREN", "STRING", "NUMBER", "WS"
  ];
  static final Vocabulary VOCABULARY = VocabularyImpl(_LITERAL_NAMES, _SYMBOLIC_NAMES);

  @override
  Vocabulary get vocabulary {
    return VOCABULARY;
  }

  @override
  String get grammarFileName => 'GameDSL.g4';

  @override
  List<int> get serializedATN => _serializedATN;

  @override
  ATN getATN() {
   return _ATN;
  }

  GameDSLParser(TokenStream input) : super(input) {
    interpreter = ParserATNSimulator(this, _ATN, _decisionToDFA, _sharedContextCache);
  }

  StartContext start() {
    dynamic _localctx = StartContext(context, state);
    enterRule(_localctx, 0, RULE_start);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 38;
      gameBoard();
      state = 39;
      game();
      state = 44;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      while (_la == TOKEN_COMMA) {
        state = 40;
        match(TOKEN_COMMA);
        state = 41;
        game();
        state = 46;
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
      }
      state = 47;
      match(TOKEN_EOF);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameBoardContext gameBoard() {
    dynamic _localctx = GameBoardContext(context, state);
    enterRule(_localctx, 2, RULE_gameBoard);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 49;
      match(TOKEN_T__0);
      state = 50;
      width();
      state = 51;
      match(TOKEN_COMMA);
      state = 52;
      height();
      state = 53;
      match(TOKEN_COMMA);
      state = 54;
      sensorXY();
      state = 59;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      while (_la == TOKEN_COMMA) {
        state = 55;
        match(TOKEN_COMMA);
        state = 56;
        sensorXY();
        state = 61;
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  SensorXYContext sensorXY() {
    dynamic _localctx = SensorXYContext(context, state);
    enterRule(_localctx, 4, RULE_sensorXY);
    try {
      enterOuterAlt(_localctx, 1);
      state = 62;
      match(TOKEN_LPAREN);
      state = 63;
      id();
      state = 64;
      match(TOKEN_COMMA);
      state = 65;
      x();
      state = 66;
      match(TOKEN_COMMA);
      state = 67;
      y();
      state = 68;
      match(TOKEN_RPAREN);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameContext game() {
    dynamic _localctx = GameContext(context, state);
    enterRule(_localctx, 6, RULE_game);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 70;
      match(TOKEN_T__1);
      state = 71;
      match(TOKEN_LPAREN);
      state = 72;
      gameId();
      state = 73;
      match(TOKEN_COMMA);
      state = 74;
      gameTimeType();
      state = 75;
      match(TOKEN_COMMA);
      state = 76;
      stateSelectionType();
      state = 77;
      match(TOKEN_COMMA);
      state = 78;
      gameDuration();
      state = 79;
      match(TOKEN_COMMA);
      state = 80;
      gameState();
      state = 85;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      while (_la == TOKEN_COMMA) {
        state = 81;
        match(TOKEN_COMMA);
        state = 82;
        gameState();
        state = 87;
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
      }
      state = 88;
      match(TOKEN_RPAREN);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameStateContext gameState() {
    dynamic _localctx = GameStateContext(context, state);
    enterRule(_localctx, 8, RULE_gameState);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 90;
      match(TOKEN_T__2);
      state = 91;
      match(TOKEN_LPAREN);
      state = 92;
      gameStateType();
      state = 93;
      match(TOKEN_COMMA);
      state = 94;
      gameStateDuration();
      state = 97; 
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      do {
        state = 95;
        match(TOKEN_COMMA);
        state = 96;
        sensorState();
        state = 99; 
        errorHandler.sync(this);
        _la = tokenStream.LA(1)!;
      } while (_la == TOKEN_COMMA);
      state = 101;
      match(TOKEN_RPAREN);
      state = 103;
      errorHandler.sync(this);
      _la = tokenStream.LA(1)!;
      if (_la == TOKEN_STRING) {
        state = 102;
        gameStateAnnotation();
      }

    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameStateTypeContext gameStateType() {
    dynamic _localctx = GameStateTypeContext(context, state);
    enterRule(_localctx, 10, RULE_gameStateType);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 105;
      _la = tokenStream.LA(1)!;
      if (!((((_la) & ~0x3f) == 0 && ((1 << _la) & 240) != 0))) {
      errorHandler.recoverInline(this);
      } else {
        if ( tokenStream.LA(1)! == IntStream.EOF ) matchedEOF = true;
        errorHandler.reportMatch(this);
        consume();
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameTimeTypeContext gameTimeType() {
    dynamic _localctx = GameTimeTypeContext(context, state);
    enterRule(_localctx, 12, RULE_gameTimeType);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 107;
      _la = tokenStream.LA(1)!;
      if (!(_la == TOKEN_T__7 || _la == TOKEN_T__8)) {
      errorHandler.recoverInline(this);
      } else {
        if ( tokenStream.LA(1)! == IntStream.EOF ) matchedEOF = true;
        errorHandler.reportMatch(this);
        consume();
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  StateSelectionTypeContext stateSelectionType() {
    dynamic _localctx = StateSelectionTypeContext(context, state);
    enterRule(_localctx, 14, RULE_stateSelectionType);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 109;
      _la = tokenStream.LA(1)!;
      if (!(_la == TOKEN_T__7 || _la == TOKEN_T__9)) {
      errorHandler.recoverInline(this);
      } else {
        if ( tokenStream.LA(1)! == IntStream.EOF ) matchedEOF = true;
        errorHandler.reportMatch(this);
        consume();
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  SensorStateContext sensorState() {
    dynamic _localctx = SensorStateContext(context, state);
    enterRule(_localctx, 16, RULE_sensorState);
    try {
      enterOuterAlt(_localctx, 1);
      state = 111;
      color();
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  ColorContext color() {
    dynamic _localctx = ColorContext(context, state);
    enterRule(_localctx, 18, RULE_color);
    int _la;
    try {
      enterOuterAlt(_localctx, 1);
      state = 113;
      _la = tokenStream.LA(1)!;
      if (!((((_la) & ~0x3f) == 0 && ((1 << _la) & 522240) != 0))) {
      errorHandler.recoverInline(this);
      } else {
        if ( tokenStream.LA(1)! == IntStream.EOF ) matchedEOF = true;
        errorHandler.reportMatch(this);
        consume();
      }
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameStateAnnotationContext gameStateAnnotation() {
    dynamic _localctx = GameStateAnnotationContext(context, state);
    enterRule(_localctx, 20, RULE_gameStateAnnotation);
    try {
      enterOuterAlt(_localctx, 1);
      state = 115;
      match(TOKEN_STRING);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameIdContext gameId() {
    dynamic _localctx = GameIdContext(context, state);
    enterRule(_localctx, 22, RULE_gameId);
    try {
      enterOuterAlt(_localctx, 1);
      state = 117;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  IdContext id() {
    dynamic _localctx = IdContext(context, state);
    enterRule(_localctx, 24, RULE_id);
    try {
      enterOuterAlt(_localctx, 1);
      state = 119;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  XContext x() {
    dynamic _localctx = XContext(context, state);
    enterRule(_localctx, 26, RULE_x);
    try {
      enterOuterAlt(_localctx, 1);
      state = 121;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  YContext y() {
    dynamic _localctx = YContext(context, state);
    enterRule(_localctx, 28, RULE_y);
    try {
      enterOuterAlt(_localctx, 1);
      state = 123;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  WidthContext width() {
    dynamic _localctx = WidthContext(context, state);
    enterRule(_localctx, 30, RULE_width);
    try {
      enterOuterAlt(_localctx, 1);
      state = 125;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  HeightContext height() {
    dynamic _localctx = HeightContext(context, state);
    enterRule(_localctx, 32, RULE_height);
    try {
      enterOuterAlt(_localctx, 1);
      state = 127;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameStateDurationContext gameStateDuration() {
    dynamic _localctx = GameStateDurationContext(context, state);
    enterRule(_localctx, 34, RULE_gameStateDuration);
    try {
      enterOuterAlt(_localctx, 1);
      state = 129;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  GameDurationContext gameDuration() {
    dynamic _localctx = GameDurationContext(context, state);
    enterRule(_localctx, 36, RULE_gameDuration);
    try {
      enterOuterAlt(_localctx, 1);
      state = 131;
      match(TOKEN_NUMBER);
    } on RecognitionException catch (re) {
      _localctx.exception = re;
      errorHandler.reportError(this, re);
      errorHandler.recover(this, re);
    } finally {
      exitRule();
    }
    return _localctx;
  }

  static const List<int> _serializedATN = [
      4,1,24,134,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,
      2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,
      14,7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,1,0,1,0,1,0,1,0,5,
      0,43,8,0,10,0,12,0,46,9,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,
      5,1,58,8,1,10,1,12,1,61,9,1,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,3,1,
      3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,5,3,84,8,3,10,3,12,3,
      87,9,3,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,4,4,98,8,4,11,4,12,4,99,
      1,4,1,4,3,4,104,8,4,1,5,1,5,1,6,1,6,1,7,1,7,1,8,1,8,1,9,1,9,1,10,1,
      10,1,11,1,11,1,12,1,12,1,13,1,13,1,14,1,14,1,15,1,15,1,16,1,16,1,17,
      1,17,1,18,1,18,1,18,0,0,19,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,
      30,32,34,36,0,4,1,0,4,7,1,0,8,9,2,0,8,8,10,10,1,0,11,18,119,0,38,1,
      0,0,0,2,49,1,0,0,0,4,62,1,0,0,0,6,70,1,0,0,0,8,90,1,0,0,0,10,105,1,
      0,0,0,12,107,1,0,0,0,14,109,1,0,0,0,16,111,1,0,0,0,18,113,1,0,0,0,
      20,115,1,0,0,0,22,117,1,0,0,0,24,119,1,0,0,0,26,121,1,0,0,0,28,123,
      1,0,0,0,30,125,1,0,0,0,32,127,1,0,0,0,34,129,1,0,0,0,36,131,1,0,0,
      0,38,39,3,2,1,0,39,44,3,6,3,0,40,41,5,19,0,0,41,43,3,6,3,0,42,40,1,
      0,0,0,43,46,1,0,0,0,44,42,1,0,0,0,44,45,1,0,0,0,45,47,1,0,0,0,46,44,
      1,0,0,0,47,48,5,0,0,1,48,1,1,0,0,0,49,50,5,1,0,0,50,51,3,30,15,0,51,
      52,5,19,0,0,52,53,3,32,16,0,53,54,5,19,0,0,54,59,3,4,2,0,55,56,5,19,
      0,0,56,58,3,4,2,0,57,55,1,0,0,0,58,61,1,0,0,0,59,57,1,0,0,0,59,60,
      1,0,0,0,60,3,1,0,0,0,61,59,1,0,0,0,62,63,5,20,0,0,63,64,3,24,12,0,
      64,65,5,19,0,0,65,66,3,26,13,0,66,67,5,19,0,0,67,68,3,28,14,0,68,69,
      5,21,0,0,69,5,1,0,0,0,70,71,5,2,0,0,71,72,5,20,0,0,72,73,3,22,11,0,
      73,74,5,19,0,0,74,75,3,12,6,0,75,76,5,19,0,0,76,77,3,14,7,0,77,78,
      5,19,0,0,78,79,3,36,18,0,79,80,5,19,0,0,80,85,3,8,4,0,81,82,5,19,0,
      0,82,84,3,8,4,0,83,81,1,0,0,0,84,87,1,0,0,0,85,83,1,0,0,0,85,86,1,
      0,0,0,86,88,1,0,0,0,87,85,1,0,0,0,88,89,5,21,0,0,89,7,1,0,0,0,90,91,
      5,3,0,0,91,92,5,20,0,0,92,93,3,10,5,0,93,94,5,19,0,0,94,97,3,34,17,
      0,95,96,5,19,0,0,96,98,3,16,8,0,97,95,1,0,0,0,98,99,1,0,0,0,99,97,
      1,0,0,0,99,100,1,0,0,0,100,101,1,0,0,0,101,103,5,21,0,0,102,104,3,
      20,10,0,103,102,1,0,0,0,103,104,1,0,0,0,104,9,1,0,0,0,105,106,7,0,
      0,0,106,11,1,0,0,0,107,108,7,1,0,0,108,13,1,0,0,0,109,110,7,2,0,0,
      110,15,1,0,0,0,111,112,3,18,9,0,112,17,1,0,0,0,113,114,7,3,0,0,114,
      19,1,0,0,0,115,116,5,22,0,0,116,21,1,0,0,0,117,118,5,23,0,0,118,23,
      1,0,0,0,119,120,5,23,0,0,120,25,1,0,0,0,121,122,5,23,0,0,122,27,1,
      0,0,0,123,124,5,23,0,0,124,29,1,0,0,0,125,126,5,23,0,0,126,31,1,0,
      0,0,127,128,5,23,0,0,128,33,1,0,0,0,129,130,5,23,0,0,130,35,1,0,0,
      0,131,132,5,23,0,0,132,37,1,0,0,0,5,44,59,85,99,103
  ];

  static final ATN _ATN =
      ATNDeserializer().deserialize(_serializedATN);
}
class StartContext extends ParserRuleContext {
  GameBoardContext? gameBoard() => getRuleContext<GameBoardContext>(0);
  List<GameContext> games() => getRuleContexts<GameContext>();
  GameContext? game(int i) => getRuleContext<GameContext>(i);
  TerminalNode? EOF() => getToken(GameDSLParser.TOKEN_EOF, 0);
  List<TerminalNode> COMMAs() => getTokens(GameDSLParser.TOKEN_COMMA);
  TerminalNode? COMMA(int i) => getToken(GameDSLParser.TOKEN_COMMA, i);
  StartContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_start;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterStart(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitStart(this);
  }
}

class GameBoardContext extends ParserRuleContext {
  WidthContext? width() => getRuleContext<WidthContext>(0);
  List<TerminalNode> COMMAs() => getTokens(GameDSLParser.TOKEN_COMMA);
  TerminalNode? COMMA(int i) => getToken(GameDSLParser.TOKEN_COMMA, i);
  HeightContext? height() => getRuleContext<HeightContext>(0);
  List<SensorXYContext> sensorXYs() => getRuleContexts<SensorXYContext>();
  SensorXYContext? sensorXY(int i) => getRuleContext<SensorXYContext>(i);
  GameBoardContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameBoard;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameBoard(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameBoard(this);
  }
}

class SensorXYContext extends ParserRuleContext {
  TerminalNode? LPAREN() => getToken(GameDSLParser.TOKEN_LPAREN, 0);
  IdContext? id() => getRuleContext<IdContext>(0);
  List<TerminalNode> COMMAs() => getTokens(GameDSLParser.TOKEN_COMMA);
  TerminalNode? COMMA(int i) => getToken(GameDSLParser.TOKEN_COMMA, i);
  XContext? x() => getRuleContext<XContext>(0);
  YContext? y() => getRuleContext<YContext>(0);
  TerminalNode? RPAREN() => getToken(GameDSLParser.TOKEN_RPAREN, 0);
  SensorXYContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_sensorXY;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterSensorXY(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitSensorXY(this);
  }
}

class GameContext extends ParserRuleContext {
  TerminalNode? LPAREN() => getToken(GameDSLParser.TOKEN_LPAREN, 0);
  GameIdContext? gameId() => getRuleContext<GameIdContext>(0);
  List<TerminalNode> COMMAs() => getTokens(GameDSLParser.TOKEN_COMMA);
  TerminalNode? COMMA(int i) => getToken(GameDSLParser.TOKEN_COMMA, i);
  GameTimeTypeContext? gameTimeType() => getRuleContext<GameTimeTypeContext>(0);
  StateSelectionTypeContext? stateSelectionType() => getRuleContext<StateSelectionTypeContext>(0);
  GameDurationContext? gameDuration() => getRuleContext<GameDurationContext>(0);
  List<GameStateContext> gameStates() => getRuleContexts<GameStateContext>();
  GameStateContext? gameState(int i) => getRuleContext<GameStateContext>(i);
  TerminalNode? RPAREN() => getToken(GameDSLParser.TOKEN_RPAREN, 0);
  GameContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_game;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGame(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGame(this);
  }
}

class GameStateContext extends ParserRuleContext {
  TerminalNode? LPAREN() => getToken(GameDSLParser.TOKEN_LPAREN, 0);
  GameStateTypeContext? gameStateType() => getRuleContext<GameStateTypeContext>(0);
  List<TerminalNode> COMMAs() => getTokens(GameDSLParser.TOKEN_COMMA);
  TerminalNode? COMMA(int i) => getToken(GameDSLParser.TOKEN_COMMA, i);
  GameStateDurationContext? gameStateDuration() => getRuleContext<GameStateDurationContext>(0);
  TerminalNode? RPAREN() => getToken(GameDSLParser.TOKEN_RPAREN, 0);
  List<SensorStateContext> sensorStates() => getRuleContexts<SensorStateContext>();
  SensorStateContext? sensorState(int i) => getRuleContext<SensorStateContext>(i);
  GameStateAnnotationContext? gameStateAnnotation() => getRuleContext<GameStateAnnotationContext>(0);
  GameStateContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameState;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameState(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameState(this);
  }
}

class GameStateTypeContext extends ParserRuleContext {
  GameStateTypeContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameStateType;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameStateType(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameStateType(this);
  }
}

class GameTimeTypeContext extends ParserRuleContext {
  GameTimeTypeContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameTimeType;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameTimeType(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameTimeType(this);
  }
}

class StateSelectionTypeContext extends ParserRuleContext {
  StateSelectionTypeContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_stateSelectionType;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterStateSelectionType(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitStateSelectionType(this);
  }
}

class SensorStateContext extends ParserRuleContext {
  ColorContext? color() => getRuleContext<ColorContext>(0);
  SensorStateContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_sensorState;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterSensorState(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitSensorState(this);
  }
}

class ColorContext extends ParserRuleContext {
  ColorContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_color;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterColor(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitColor(this);
  }
}

class GameStateAnnotationContext extends ParserRuleContext {
  TerminalNode? STRING() => getToken(GameDSLParser.TOKEN_STRING, 0);
  GameStateAnnotationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameStateAnnotation;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameStateAnnotation(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameStateAnnotation(this);
  }
}

class GameIdContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  GameIdContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameId;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameId(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameId(this);
  }
}

class IdContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  IdContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_id;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterId(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitId(this);
  }
}

class XContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  XContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_x;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterX(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitX(this);
  }
}

class YContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  YContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_y;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterY(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitY(this);
  }
}

class WidthContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  WidthContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_width;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterWidth(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitWidth(this);
  }
}

class HeightContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  HeightContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_height;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterHeight(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitHeight(this);
  }
}

class GameStateDurationContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  GameStateDurationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameStateDuration;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameStateDuration(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameStateDuration(this);
  }
}

class GameDurationContext extends ParserRuleContext {
  TerminalNode? NUMBER() => getToken(GameDSLParser.TOKEN_NUMBER, 0);
  GameDurationContext([ParserRuleContext? parent, int? invokingState]) : super(parent, invokingState);
  @override
  int get ruleIndex => RULE_gameDuration;
  @override
  void enterRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.enterGameDuration(this);
  }
  @override
  void exitRule(ParseTreeListener listener) {
    if (listener is GameDSLListener) listener.exitGameDuration(this);
  }
}

