#include "../include/tdoku.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv) {
    char *puzzle = "2.6.3......1.65.7..471.8.5.5......29..8.194.6...42...1....428..6.93....5.7.....13";
    int c;
    while ((c = getopt (argc, argv, "p:")) != -1) {
        switch (c) {
            case 'p': {
                puzzle = optarg;
                break;
            }
            default: {
              abort ();
            }
        }
    }

    char solution[81];
    size_t size, guesses;

    size_t count = SolveSudoku(puzzle, 2, 0, solution, &guesses);
    if (count == 1) {
      SolveSudoku(puzzle, 1, 0, solution, &guesses);
      printf("%.81s\n", solution);
    }
}
