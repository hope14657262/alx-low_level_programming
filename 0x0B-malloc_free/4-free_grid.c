#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid - 2 dimensional grid  alloc_grid function.
 * @grid: grid 1
 * @height: grid 2
 * Return: noting
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
