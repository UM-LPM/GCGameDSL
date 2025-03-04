import 'package:flutter/material.dart';

class LedBoard {
  int id;
  Color color;
  int x;
  int y;
  LedBoard({this.id = 0, this.x = 10, this.y = 10, this.color = Colors.grey});
  void setColor(int color) {
    this.color = getColor[color] ?? errorColor;
  }

  static const int NONE = 0;
  static const int RED = 1;
  static const int BLUE = 2;
  static const int VIOLET = 3;
  static const int GREEN = 4;
  static const int YELLOW = 5;
  static const int ORANGE = 6;
  static const int WHITE = 7;
  static Color errorColor = const Color(0xFFFFC0CB);

  static Map<int, Color> getColor = {
    NONE: const Color(0),
    RED: const Color(0xFFFF0000),
    BLUE: const Color(0xFF0000FF),
    VIOLET: const Color(0xFFEE82EE),
    GREEN: const Color(0xFF008000),
    YELLOW: const Color(0xFFFFFF00),
    ORANGE: const Color(0xFFFFA500),
    WHITE: const Color(0xFFFFFFFF),
  };
}
