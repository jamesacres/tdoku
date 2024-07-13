#include "../include/tdoku.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, const char **argv) {
    size_t limit = argc > 1 ? atoll(argv[1]) : 10000;

    char *puzzle = "2.6.3......1.65.7..471.8.5.5......29..8.194.6...42...1....428..6.93....5.7.....13";
    char solution[81];
    size_t size, guesses;

    solution[0] = '\0';
    size_t count = SolveSudoku(puzzle, limit, 0, solution, &guesses);
    SolveSudoku(puzzle, 1, 0, solution, &guesses);
    printf("%.81s:%ld:%.81s\n", puzzle, count, solution);
}
