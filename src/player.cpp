#include "player.hpp"

#include <iostream>

#include "board.hpp"
#include "mark.hpp"

Player::Player(Mark mark) { this->mark = mark; }

void Player::place_mark(Board board) {
  while (true) {
    std::cout << "Input row:" << std::endl;
    int row = 0;
    std::cin >> row;
    std::cout << "Input col:" << std::endl;
    int col = 0;
    std::cin >> col;
    if (board.get_mark(row, col) == Mark::N) {
      board.set_mark(row, col, mark);
      break;
    }
    std::cout << "Invalid!" << std::endl;
  }
}