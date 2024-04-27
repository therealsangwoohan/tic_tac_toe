#pragma once

#include "mark.hpp"
#include "board.hpp"

class Player {
    public:
        Mark mark;

        Player(Mark mark);

        void place_mark(Board board);
};