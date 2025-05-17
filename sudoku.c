#include "sudoku.h"

int POSSIBLE = 511;
int SIZE_ROWS = 9;
int SIZE_COLUMNS = 9;

int main()
{
  int ** puzzle;
  Square *** sudoku;

  puzzle = createPuzzle();

  printPuzzle(puzzle);

  sudoku = setUpPuzzle(puzzle);

  return 0;
}
