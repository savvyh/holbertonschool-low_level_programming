#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* free_grid - free the malloc
* @grid: the address of the two dimensional grid
* @height: height of the grid
* Return: Nothing.
*/
void free_grid(int **grid, int height)
{
	int index;

	for (index = 0; index < height; index++)
		free(grid[index]);

	free(grid);
}
