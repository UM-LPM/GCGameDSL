import 'dart:math';
import 'dart:io';
import 'package:path/path.dart' as path;
import 'package:flutter/material.dart';
import 'package:flutter_test/flutter_test.dart';
import 'package:get_it/get_it.dart';
import 'package:urejevalniki_map/board.dart';
import 'package:urejevalniki_map/board_game_state.dart';
import 'package:urejevalniki_map/led_board.dart';

void main() async {
  TestWidgetsFlutterBinding.ensureInitialized();
  GetIt.I.registerSingleton<Board>(Board(macAddress: "MYBOARD", w: 130, h: 60, ledBoards: [
    LedBoard(id: 0, x: 10, y: 10),
    LedBoard(id: 1, x: 10, y: 50),
    LedBoard(id: 2, x: 30, y: 30),
    LedBoard(id: 3, x: 50, y: 10),
    LedBoard(id: 4, x: 50, y: 50),
    LedBoard(id: 5, x: 80, y: 10),
    LedBoard(id: 6, x: 80, y: 50),
    LedBoard(id: 7, x: 100, y: 30),
    LedBoard(id: 8, x: 120, y: 10),
    LedBoard(id: 9, x: 120, y: 50),
  ]));
  group('Basic', () {
    test('Basic calculations', () {
      Board board = GetIt.I<Board>();
      expect(board.macAddress, "MYBOARD");
      expect(board.w, 130);
      expect(board.h, 60);
      double distance = board.getDistance(0, 1);
      expect(distance, 40.0);
      print("Distance 1-2: ${board.getDistance(1, 3)}");
    });

    test('Calculate all distances', () {
      Board board = GetIt.I<Board>();

      GameStates gameStates = GameStates(4, 10);
      gameStates.states[0].state[0] = 1;
      gameStates.states[1].state[1] = 1;
      gameStates.states[2].state[0] = 1;
      gameStates.states[3].state[9] = 1;

      double totalDistance = gameStates.getAllDistances(board);
      print("Total distance: $totalDistance");
      expect(totalDistance, board.getDistance(0, 1) + board.getDistance(1, 0) + board.getDistance(0, 9));
    });

    test('Find max randomly random', () {
      Board board = GetIt.I<Board>();

      GameStates gameStates = GameStates(4, 10);
      gameStates.reset();
      gameStates.setRandomOne();
      GameStates maxDistanceStates = gameStates.deepCopy();
      double maxDistance = gameStates.getAllDistances(board);
      print("Max distance: $maxDistance");
      print(maxDistanceStates);
      for (int i = 0; i < 10000; i++) {
        gameStates.reset();
        gameStates.setRandomOne();
        double distance = gameStates.getAllDistances(board);
        if (distance > maxDistance) {
          maxDistance = distance;
          maxDistanceStates = gameStates.deepCopy();
          print("Max distance: $maxDistance");
          print(maxDistanceStates);
        }
      }
      print("Final Max distance: $maxDistance");

      expect(maxDistance, 351.14099732158877);
    });
    test('Big 50 stats', () {
      Board board = GetIt.I<Board>();
      GameStates gameStates = GameStates(50, 10);
      gameStates.reset();
      gameStates.setRandomOne();
      int count = 0;
      GameStates maxDistanceStates = gameStates.deepCopy();
      double maxDistance = gameStates.getAllDistances(board);
      print("$count, 0, Max distance: $maxDistance");
      print(maxDistanceStates);
      for (int i = 0; i < 100000; i++) {
        gameStates.reset();
        gameStates.setRandomOne();
        double distance = gameStates.getAllDistances(board);
        if (distance > maxDistance) {
          count++;
          maxDistance = distance;
          maxDistanceStates = gameStates.deepCopy();
          print("$count, $i Max distance: $maxDistance");
          print(maxDistanceStates);
        }
      }
      print("Final Max distance: $maxDistance");

      expect(maxDistance, 3693);
    });

    double getDistanceTarget(double totalDistance, double targetDistance) {
      return (totalDistance - targetDistance).abs();
    }

    double getTargetFitness(double totalDistance, double targetDistance) {
      return 1 / (1 + getDistanceTarget(totalDistance, targetDistance));
    }

    Future<void> writeValuesToCsv(String filePath, List<List<dynamic>> values) async {
      final file = File(filePath);
      final sink = file.openWrite();

      for (var row in values) {
        sink.write(row.join(',') + '\n');
      }

      await sink.flush();
      await sink.close();
    }

    test('Big Random 150 stats', () async {
      List<List<dynamic>> csvData = [
        ["eval", "distance"]
      ];
      Board board = GetIt.I<Board>();
      GameStates gameStates = GameStates(150, 10);
      bool printOut = false;
      gameStates.reset();
      gameStates.setRandomOne();
      int eval = 1;
      double targetDistance = 10000;
      GameStates maxDistanceStates = gameStates.deepCopy();
      double bestDistance = gameStates.getAllDistances(board);
      print("$eval, 0, Max distance: $bestDistance");
      csvData.add([eval, bestDistance]);
      if (printOut) print(maxDistanceStates);
      for (int i = 0; i < 10000; i++) {
        gameStates.reset();
        gameStates.setRandomOne();
        double distance = gameStates.getAllDistances(board);
        eval++;
        if (getTargetFitness(targetDistance, distance) > getTargetFitness(targetDistance, bestDistance)) {
          bestDistance = distance;
          maxDistanceStates = gameStates.deepCopy();
          print("$eval, $i Max distance: $bestDistance");
          csvData.add([eval, bestDistance]);
          if (printOut) print(maxDistanceStates);
        }
      }
      print("Final Max distance: $bestDistance");
      String filePath = path.join(Directory.current.path, 'build', 'rnd_${targetDistance.round()}.csv');
      await writeValuesToCsv(filePath, csvData);
      expect(bestDistance, bestDistance);
    });

    test('EA', () async {
      List<List<dynamic>> csvData = [
        ["eval", "distance"]
      ];
      Board board = GetIt.I<Board>();
      bool printOut = false;
      int pop_size = 50;
      List<GameStates> population = List.generate(pop_size, (index) => GameStates(150, board.ledBoards.length));
      double bestDistance = 0.0;
      double pm = 0.3;
      double pc = 0.4;
      GameStates maxDistanceStates = GameStates(150, board.ledBoards.length);
      int count = 0;
      int eval = 0;
      double targetDistance = 6000;
      for (int i = 0; i < pop_size; i++) {
        //initialize random population
        population[i].reset();
        population[i].setRandomOne();
        population[i].totalDistance = population[i].getAllDistances(board);
        eval++;
        if (i == 0 || getTargetFitness(bestDistance, targetDistance) < getTargetFitness(bestDistance, targetDistance)) {
          bestDistance = population[i].totalDistance;
          maxDistanceStates = population[i].deepCopy();
          print("$count, $eval, 0 Max distance: $bestDistance");
          csvData.add([eval, bestDistance]);
          if (printOut) print(maxDistanceStates);
        }
      }

      for (int gen = 0; gen < 100; gen++) {
        for (int i = 0; i < pop_size; i++) {
          GameStates tmp = population[i].deepCopy();
          bool mutate = false;
          if (Random().nextDouble() < pm) {
            //mutate
            int randomIndex = Random().nextInt(tmp.states.length);
            tmp.states[randomIndex].resetState();
            tmp.states[randomIndex].setRandomStatePositionToOne();
            mutate = true;
          }
          if (Random().nextDouble() < pc) {
            //crossover
            int randomIndex = Random().nextInt(pop_size);
            for (int j = 0; j < tmp.states.length; j++) {
              if (Random().nextDouble() < 0.5) {
                tmp.states[j].state = List.from(population[randomIndex].states[j].state);
                mutate = true;
              }
            }
          }
          if (mutate) {
            tmp.totalDistance = tmp.getAllDistances(board);
            eval++;
            if (getTargetFitness(tmp.totalDistance, targetDistance) > getTargetFitness(population[i].totalDistance, targetDistance)) {
              population[i] = tmp.deepCopy();
              //print("update $i, $eval, $gen Max distance x: ${population[i].totalDistance} ${getTargetFitness(tmp.totalDistance, targetDistance)} population: ${getTargetFitness(population[i].totalDistance, targetDistance)}");
              if (getDistanceTarget(bestDistance, targetDistance) > getDistanceTarget(tmp.totalDistance, targetDistance)) {
                count++;
                bestDistance = tmp.totalDistance;
                maxDistanceStates = tmp.deepCopy();
                print("$count, $eval, $gen Max distance x: $bestDistance");
                csvData.add([eval, bestDistance]);
                if (printOut) print(maxDistanceStates);
              }
            }
          }
        }
      }
      print("Final Max distance: $bestDistance");
      print(maxDistanceStates);
      String filePath = path.join(Directory.current.path, 'build', 'ea_${targetDistance.round()}.csv');
      await writeValuesToCsv(filePath, csvData);
      print('CSV file written to $filePath');
      expect(bestDistance, bestDistance);
    });
  });
}
