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
