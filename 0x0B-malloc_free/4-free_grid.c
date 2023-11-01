#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* free_grid - Frees memory allocated for a 2D array
* @grid: Pointer to the 2D array
* @height: Height dimension of the grid
*
* Description: Frees memory associated with a 2D grid.
*/
void free_grid(int **grid, int height)
{
int i;

for (i = 0; i < height; i++)
{
free(grid[i]);
}

free(grid);
}
