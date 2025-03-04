import 'package:flutter/material.dart';
import 'board.dart';
import 'led_board.dart';

class ColorChanging extends StatefulWidget {
  const ColorChanging({super.key});

  @override
  State<ColorChanging> createState() => _ColorChangingState();
}

class _ColorChangingState extends State<ColorChanging> {
  late Board board;
  double _lightRadius = 5.0;
  LedBoard? _selectedLed;

  @override
  void initState() {
    super.initState();
    board = Board.get(BoardType.CUSTOM_HUGE);
    _lightRadius = board.lightRadius;
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        backgroundColor: Theme.of(context).colorScheme.inversePrimary,
        title: const Text('LED color changing'),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Container(
              width: board.w.toDouble(),
              height: board.h.toDouble(),
              decoration: BoxDecoration(
                border: Border.all(color: Colors.black),
              ),
              child: Stack(
                children: board.ledBoards.map((led) {
                  return Positioned(
                    left: led.x.toDouble(),
                    top: led.y.toDouble(),
                    child: GestureDetector(
                      onTap: () => _changeLedColor(led),
                      child: Container(
                        width: _lightRadius * 2,
                        height: _lightRadius * 2,
                        decoration: BoxDecoration(
                          color: led.color,
                          shape: BoxShape.circle,
                        ),
                      ),
                    ),
                  );
                }).toList(),
              ),
            ),
            const SizedBox(height: 20),
            Slider(
              value: _lightRadius,
              min: 1,
              max: 15,
              divisions: 14,
              label: _lightRadius.toString(),
              onChanged: (double value) {
                setState(() {
                  _lightRadius = value;
                  board.lightRadius = value; // Update the board's lightRadius
                });
              },
            ),
            const Text('Adjust LED Size'),
          ],
        ),
      ),
      floatingActionButton: Stack(
        children: [
          Positioned(
            left: 30,
            bottom: 30,
            child: FloatingActionButton(
              onPressed: _resetBoardColors,
              tooltip: 'Reset Colors',
              child: const Icon(Icons.refresh),
            ),
          ),
          Positioned(
            right: 30,
            bottom: 30,
            child: FloatingActionButton(
              onPressed: _changeBoardColors,
              tooltip: 'Change Selected LED Color',
              child: const Icon(Icons.color_lens),
            ),
          ),
        ],
      ),
    );
  }

  void _changeLedColor(LedBoard led) {
    setState(() {
      // Cycle through red, green, and blue
      if (led.color == Colors.red) {
        led.color = Colors.green;
      } else if (led.color == Colors.green) {
        led.color = Colors.blue;
      } else {
        led.color = Colors.red;
      }
    });
  }
  void _resetBoardColors() {
    setState(() {
      for (var led in board.ledBoards) {
        // Reset each LED to a default color (let's use grey)
        led.color = Colors.grey;
      }
    });
  }

  void _changeBoardColors() {
    setState(() {
      for (var led in board.ledBoards) {
        // Change each LED to a random color for demonstration
        led.setColor((led.id % LedBoard.getColor.length));
      }
    });
  }
}
