#include <iostream>
#include <vector>

#include "board.hpp"
#include "mark.hpp"
#include "player.hpp"

int main() {
  Board board(3);
  // board.set_mark(0, 0, Mark::O);
  board.set_mark(0, 1, Mark::O);
  board.set_mark(0, 2, Mark::O);
  // std::cout << board.check_status(Mark::O) << std::endl;
  bool x = board.get_mark(0, 0) == Mark::N;
  std::cout << x << std::endl;
  board.display();
  // std::vector<Player> players;
  // players.push_back(Player(Mark::X));
  // players.push_back(Player(Mark::O));
  // int round = 0;
  // board.display();
  // while (true) {
  //     int player_idx = round % 2;
  //     std::cout << "Player " << player_idx << " turn:" << std::endl;
  //     players[player_idx].place_mark(board);
  //     board.display();
  //     if (board.check_status(players[player_idx].mark)) {
  //         std::cout << "Player " << player_idx << " has won!" << std::endl;
  //         break;
  //     }
  //     round += 1;
  // }
  return 0;
}