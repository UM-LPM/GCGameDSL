# Language extended with annotation support

# AntLR definitions

See file

## Example

Adding example of state annotation "avoid zone" and "bonus round".

```console
board 5, 5, (1, 0, 0), (2, 1, 1), (3, 2, 2)

game (1, sequence, random, 60,
    game_state (start, 3, red, blue),
    game_state (normal, 2, green, yellow),
    game_state (mine, 1, violet, orange) "avoid zone"
)

game (2, stopwatch, sequence, 45,
    game_state (clean, 2, off, green),
    game_state (normal, 3, blue, white) "bonus round"
)
```
