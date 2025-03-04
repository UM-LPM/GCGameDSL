//import 'package:device_ble/models/board/led_board.dart';
//import 'package:device_ble/models/game.dart';

import 'dart:math';

import 'package:get_it/get_it.dart';

import 'led_board.dart';

enum BoardType { GC_CLASSIC, MOVE_WELL, MOVE_WELL_BIG, CUSTOM_HUGE }

class Board {
  int volume = 90;
  int timerShow = 0;
  String macAddress;
  int w;
  int h;
  int diplayX = 0;
  int diplayY = 0;
  double lightRadius = 5;

  List<LedBoard> ledBoards = [];

  //Board({this.macAddress = "MYBOARD", this.w = 100, this.h = 50});
  Board({required this.macAddress, required this.w, required this.h, this.ledBoards = const []});
  double getDistance(int id1, int id2) {
    // Find the LedBoard objects with the given IDs
    LedBoard led1 = ledBoards.firstWhere(
      (led) => led.id == id1,
      orElse: () => throw ArgumentError('LedBoard with id $id1 not found'),
    );

    LedBoard led2 = ledBoards.firstWhere(
      (led) => led.id == id2,
      orElse: () => throw ArgumentError('LedBoard with id $id2 not found'),
    );

    // Calculate the distance between the two LedBoards
    double dx = (led1.x - led2.x).toDouble();
    double dy = (led1.y - led2.y).toDouble();
    return sqrt(dx * dx + dy * dy);
  }

  static Board get(BoardType boardType) {
    switch (boardType) {
      case BoardType.MOVE_WELL:
        {
          Board board = Board(macAddress: "Small", w: 100, h: 60);
          List<LedBoard> ledBoards = [
            LedBoard(id: 1, x: 30, y: 40),
            LedBoard(id: 2, x: 30, y: 20),
            LedBoard(id: 3, x: 10, y: 10),
            LedBoard(id: 4, x: 10, y: 30),
            LedBoard(id: 5, x: 10, y: 50),
            LedBoard(id: 6, x: 50, y: 50),
            LedBoard(id: 7, x: 50, y: 30),
            LedBoard(id: 8, x: 50, y: 10),
            LedBoard(id: 9, x: 70, y: 20),
            LedBoard(id: 10, x: 70, y: 40),
            LedBoard(id: 11, x: 90, y: 50),
            LedBoard(id: 12, x: 90, y: 30),
            LedBoard(id: 13, x: 90, y: 10),
          ];
          board.ledBoards = ledBoards;
          board.diplayX = 50;
          board.diplayY = 55;

          return board;
        }
      case BoardType.MOVE_WELL_BIG:
        {
          Board board = Board(macAddress: "Normal", w: 100, h: 100);
          List<LedBoard> ledBoards = [
            LedBoard(id: 1, x: 30, y: 80),
            LedBoard(id: 2, x: 30, y: 60),
            LedBoard(id: 3, x: 30, y: 40),
            LedBoard(id: 4, x: 30, y: 20),
            LedBoard(id: 5, x: 10, y: 10),
            LedBoard(id: 6, x: 10, y: 30),
            LedBoard(id: 7, x: 10, y: 50),
            LedBoard(id: 8, x: 10, y: 70),
            LedBoard(id: 9, x: 10, y: 90),
            LedBoard(id: 10, x: 50, y: 70),
            LedBoard(id: 11, x: 50, y: 50),
            LedBoard(id: 12, x: 50, y: 30),
            LedBoard(id: 13, x: 50, y: 10),
            LedBoard(id: 14, x: 70, y: 20),
            LedBoard(id: 15, x: 70, y: 40),
            LedBoard(id: 16, x: 70, y: 60),
            LedBoard(id: 17, x: 70, y: 80),
            LedBoard(id: 18, x: 90, y: 90),
            LedBoard(id: 19, x: 90, y: 70),
            LedBoard(id: 20, x: 90, y: 50),
            LedBoard(id: 21, x: 90, y: 30),
            LedBoard(id: 22, x: 90, y: 10),
          ];
          board.ledBoards = ledBoards;
          board.diplayX = 50;
          board.diplayY = 95;

          return board;
        }
      case BoardType.CUSTOM_HUGE:
        {
          Board board = Board(macAddress: "Normal", w: 700, h: 200);
          List<LedBoard> ledBoards = [
            LedBoard(id: 1, x: 30 * 7, y: 80 * 2),
            LedBoard(id: 2, x: 30 * 7, y: 60 * 2),
            LedBoard(id: 3, x: 30 * 7, y: 40 * 2),
            LedBoard(id: 4, x: 30 * 7, y: 20 * 2),
            LedBoard(id: 5, x: 10 * 7, y: 10 * 2),
            LedBoard(id: 6, x: 10 * 7, y: 30 * 2),
            LedBoard(id: 7, x: 10 * 7, y: 50 * 2),
            LedBoard(id: 8, x: 10 * 7, y: 70 * 2),
            LedBoard(id: 9, x: 10 * 7, y: 90 * 2),
            LedBoard(id: 10, x: 50 * 7, y: 70 * 2),
            LedBoard(id: 11, x: 50 * 7, y: 50 * 2),
            LedBoard(id: 12, x: 50 * 7, y: 30 * 2),
            LedBoard(id: 13, x: 50 * 7, y: 10 * 2),
            LedBoard(id: 14, x: 70 * 7, y: 20 * 2),
            LedBoard(id: 15, x: 70 * 7, y: 40 * 2),
            LedBoard(id: 16, x: 70 * 7, y: 60 * 2),
            LedBoard(id: 17, x: 70 * 7, y: 80 * 2),
            LedBoard(id: 18, x: 90 * 7, y: 90 * 2),
            LedBoard(id: 19, x: 90 * 7, y: 70 * 2),
            LedBoard(id: 20, x: 90 * 7, y: 50 * 2),
            LedBoard(id: 21, x: 90 * 7, y: 30 * 2),
            LedBoard(id: 22, x: 90 * 7, y: 10 * 2),
          ];

          board.ledBoards = ledBoards;
          board.diplayX = 350;
          board.diplayY = 150;

          return board;
        }

      case BoardType.GC_CLASSIC:
      default:
        {
          Board board = Board(macAddress: "Wide GC", w: 130, h: 60);
          List<LedBoard> ledBoards = [
            LedBoard(id: 1, x: 80, y: 50),
            LedBoard(id: 2, x: 120, y: 50),
            LedBoard(id: 3, x: 120, y: 10),
            LedBoard(id: 4, x: 80, y: 10),
            LedBoard(id: 5, x: 100, y: 30),
            LedBoard(id: 6, x: 50, y: 50),
            LedBoard(id: 7, x: 10, y: 50),
            LedBoard(id: 8, x: 10, y: 10),
            LedBoard(id: 9, x: 50, y: 10),
            LedBoard(id: 10, x: 30, y: 30),
          ];
          board.ledBoards = ledBoards;
          board.diplayX = 70;
          board.diplayY = 55;
          return board;
        }
    }
  }
}
