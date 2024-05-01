#include "board.hpp"

#include <iostream>
#include <vector>

#include "mark.hpp"

Board::Board(int dimension) {
  this->dimension = dimension;
  raw_board = std::vector<std::vector<Mark> >(
      dimension, std::vector<Mark>(dimension, Mark::N));
}

Mark Board::get_mark(int r, int c) { return raw_board[r][c]; }

void Board::set_mark(int r, int c, Mark mark) { raw_board[r][c] = mark; }

bool Board::check_status(Mark mark) {
  for (int r = 0; r < dimension; r++) {
    int nb_of_mark = 0;
    for (int c = 0; c < dimension; c++) {
      if (raw_board[r][c] == mark) {
        nb_of_mark += 1;
      }
    }
    if (nb_of_mark == dimension) {
      return true;
    }
  }

  for (int c = 0; c < dimension; c++) {
    int nb_of_mark = 0;
    for (int r = 0; r < dimension; r++) {
      if (raw_board[r][c] == mark) {
        nb_of_mark += 1;
      }
    }
    if (nb_of_mark == dimension) {
      return true;
    }
  }

  return false;
}

void Board::display() {
  for (int r = 0; r < dimension; r++) {
    for (int c = 0; c < dimension; c++) {
      if (raw_board[r][c] == Mark::O) {
        std::cout << "O";
      } else if (raw_board[r][c] == Mark::X) {
        std::cout << "X";
      } else {
        std::cout << "_";
      }
    }
    std::cout << std::endl;
  }
}