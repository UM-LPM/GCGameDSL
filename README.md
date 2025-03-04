# Language GCGameDSL
GCGameDSL
## Grammar BNF
```console
START ::= GAME_BOARD ( GAME {, GAME }* )
GAME_BOARD ::= "board" WIDTH, HEIGHT, SENSOR_XY  {, SENSOR_XY }* )
SENSOR_XY ::= ( ID, X, Y )
GAME ::= "game" (GAME_ID, GAME_TIME_TYPE, STATE_SELECTION_TYPE, 
  GAME_DURATION, GAME_STATE {, GAME_STATE }* )
GAME_STATE ::= "game_state" ( GAME_STATE_TYPE, GAME_STATE_DURATION
        {, SENSOR_STATE }+ )
GAME_STATE_TYPE ::= "normal" | "start" | "clean" | "mine"
GAME_TIME_TYPE ::= "sequence" | "stopwatch"
STATE_SELECTION_TYPE ::= "random" | "sequence"
SENSOR_STATE ::= COLOR
COLOR ::= "off" | "red" | "blue" | "violet" | "green" | "yellow" | 
          "orange" | "white"
GAME_ID ::= number
ID ::= number
X ::= number
Y ::= number
WIDTH ::= number
HEIGHT ::= number
GAME_STATE_DURATION ::= number
GAME_DURATION :: number
```

## Board with games 1 and 50 example
```console
board(130, 60,
  (1, 10, 10), (2, 10, 50), (3, 30, 30),
  (4, 50, 10), (5, 50, 50), (6, 80, 10),
  (7, 80, 50), (8, 100, 30), (9, 120, 10),
  (10, 120, 50))

game(1, sequence, random, 60,
    game_state(start,0,off,off,off,off,red,off,off,off,off,off),
    game_state(normal,0,red,off,off,off,off,off,off,off,off,off),
    game_state(normal,0,off,red,off,off,off,off,off,off,off,off),
    game_state(normal,0,off,off,red,off,off,off,off,off,off,off),
    game_state(normal,0,off,off,off,red,off,off,off,off,off,off),
    game_state(normal,0,off,off,off,off,red,off,off,off,off,off),
    game_state(normal,0,off,off,off,off,off,red,off,off,off,off),
    game_state(normal,0,off,off,off,off,off,off,red,off,off,off),
    game_state(normal,0,off,off,off,off,off,off,off,red,off,off),
    game_state(normal,0,off,off,off,off,off,off,off,off,red,off),
    game_state(normal,0,off,off,off,off,off,off,off,off,off,red))

game(50, stopwatch, sequence, 0,
    game_state(start,0,off,off,red,off,off,off,off,off,off,off),
    game_state(clean,0,green,off,green,off,off,off,off,off,off,green),
    game_state(clean,0,off,red,off,red,off,red,off,red,off,red),
    game_state(clean,0,blue,off,blue,off,blue,off,blue,off,blue,off))
```
