import 'package:flutter/material.dart';
import 'dart:async';
import 'board.dart';
import 'led_board.dart';

class FollowTheLight extends StatefulWidget {
  const FollowTheLight({super.key});

  @override
  State<FollowTheLight> createState() => _FollowTheLightState();
}

class _FollowTheLightState extends State<FollowTheLight> {
  late Board board;
  LedBoard? _currentLed;
  int _score = 0;
  late Timer _gameTimer;
  bool _gameActive = false;

  @override
  void initState() {
    super.initState();
    board = Board.get(BoardType.CUSTOM_HUGE);
  }

  void _startGame() {
    setState(() {
      _score = 0;
      _gameActive = true;
      _showNextLed();
    });

    _gameTimer = Timer(const Duration(seconds: 10), () {
      setState(() {
        _gameActive = false;
        _currentLed = null;
      });
    });
  }

  void _showNextLed() {
    if (!_gameActive) return;

    setState(() {
      _currentLed = (board.ledBoards.toList()..shuffle()).first;
    });
  }

  void _ledClicked() {
    if (!_gameActive) return;

    setState(() {
      _score++;
      _showNextLed();
    });
  }

  @override
  void dispose() {
    _gameTimer.cancel();
    super.dispose();
  }

  @override
  Widget build(BuildContext context) {
    return Scaffold(
      appBar: AppBar(
        title: const Text('Follow the light game'),
      ),
      body: Center(
        child: Column(
          mainAxisAlignment: MainAxisAlignment.center,
          children: [
            Text('Score: $_score', style: const TextStyle(fontSize: 24)),
            const SizedBox(height: 20),
            Container(
              width: board.w.toDouble(),
              height: board.h.toDouble(),
              decoration: BoxDecoration(
                border: Border.all(color: Colors.black),
              ),
              child: Stack(
                children: [
                  if (_currentLed != null)
                    Positioned(
                      left: _currentLed!.x.toDouble(),
                      top: _currentLed!.y.toDouble(),
                      child: GestureDetector(
                        onTap: _ledClicked,
                        child: Container(
                          width: 20,
                          height: 20,
                          decoration: const BoxDecoration(
                            color: Colors.red,
                            shape: BoxShape.circle,
                          ),
                        ),
                      ),
                    ),
                ],
              ),
            ),
            const SizedBox(height: 20),
            ElevatedButton(
              onPressed: _startGame,
              child: const Text('Start Game'),
            ),
          ],
        ),
      ),
    );
  }
}
