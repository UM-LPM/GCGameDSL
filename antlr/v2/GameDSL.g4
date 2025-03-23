grammar GameDSL;

// Parser rules
start                 : gameBoard game (COMMA game)* EOF ;
gameBoard             : 'board' width COMMA height COMMA sensorXY (COMMA sensorXY)* ;
sensorXY              : LPAREN id COMMA x COMMA y RPAREN ;
game                  : 'game' LPAREN gameId COMMA gameTimeType COMMA stateSelectionType COMMA
                        gameDuration COMMA gameState (COMMA gameState)* RPAREN ;
gameState             : 'game_state' LPAREN gameStateType COMMA gameStateDuration
                        (COMMA sensorState)+ RPAREN gameStateAnnotation? ;

gameStateType         : 'normal' | 'start' | 'clean' | 'mine' ;
gameTimeType          : 'sequence' | 'stopwatch' ;
stateSelectionType    : 'random' | 'sequence' ;
sensorState           : color ;
color                 : 'off' | 'red' | 'blue' | 'violet' | 'green'
                        | 'yellow' | 'orange' | 'white' ;
gameStateAnnotation   : STRING ;

gameId                : NUMBER ;
id                    : NUMBER ;
x                     : NUMBER ;
y                     : NUMBER ;
width                 : NUMBER ;
height                : NUMBER ;
gameStateDuration     : NUMBER ;
gameDuration          : NUMBER ;

// Lexer rules
COMMA                 : ',' ;
LPAREN                : '(' ;
RPAREN                : ')' ;
STRING                : '"' (~["\r\n])* '"' ;
NUMBER                : [0-9]+ ;
WS                    : [ \t\r\n]+ -> skip ;
