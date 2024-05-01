#pragma once

#include "board.hpp"
#include "mark.hpp"

class Player {
 public:
  Mark mark;

  Player(Mark mark);

  void place_mark(Board board);
};