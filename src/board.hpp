#pragma once

#include <vector>
#include "mark.hpp"

class Board {
    public:
        int dimension;

        Board(int dimension);

        Mark get_mark(int r, int c);

        void set_mark(int r, int c, Mark mark);

        bool check_status(Mark mark);

        void display();

    private:
        std::vector<std::vector<Mark> > raw_board;
};