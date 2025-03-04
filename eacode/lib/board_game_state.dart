import 'dart:math';

import 'package:flutter/material.dart';
import 'package:urejevalniki_map/board.dart';

class BoardGameState {
  List<int> state;

  BoardGameState(int n) : state = List<int>.filled(n, 0);

  bool isEqual(BoardGameState other) {
    if (state.length != other.state.length) return false;
    for (int i = 0; i < state.length; i++) {
      if (state[i] != other.state[i]) {
        return false;
      }
    }
    return true;
  }

  bool hasSameOnLED(BoardGameState other) {
    if (state.length != other.state.length) return false;
    for (int i = 0; i < state.length; i++) {
      if (state[i] > 0 && other.state[i] > 0) {
        return true;
      }
    }
    return false;
  }

  void resetState() {
    for (int i = 0; i < state.length; i++) {
      state[i] = 0;
    }
  }

  void setRandomStatePositionToOne() {
    Random random = Random();
    int randomIndex = random.nextInt(state.length);
    state[randomIndex] = 1;
  }

  BoardGameState deepCopy() {
    BoardGameState copy = BoardGameState(state.length);
    for (int i = 0; i < state.length; i++) {
      copy.state[i] = state[i];
    }
    return copy;
  }

  @override
  String toString() {
    return '$state\n';
  }
}

class GameStates {
  List<BoardGameState> states;
  double totalDistance = 0.0;
  GameStates(int numberOfStates, int n) : states = List<BoardGameState>.generate(numberOfStates, (index) => BoardGameState(n));

  void setRandomOne() {
    for (BoardGameState state in states) {
      state.setRandomStatePositionToOne();
    }
  }

  void reset() {
    for (BoardGameState state in states) {
      state.resetState();
    }
    totalDistance = 0.0;
  }

  double getAllDistances(Board board) {
    double totalDistance = 0.0;
    for (int i = 0; i < states.length - 1; i++) {
      for (int j = 0; j < states[i].state.length; j++) {
        for (int jj = 0; jj < states[i].state.length; jj++) {
          if (states[i].state[j] != 0 && states[i + 1].state[jj] != 0) {
            totalDistance += board.getDistance(j, jj);
          }
        }
      }
    }
    return totalDistance;
  }

  GameStates deepCopy() {
    GameStates copy = GameStates(states.length, states[0].state.length);
    for (int i = 0; i < states.length; i++) {
      copy.states[i] = states[i].deepCopy();
    }
    copy.totalDistance = totalDistance;
    return copy;
  }

  @override
  String toString() {
    return ' $states';
  }
}
