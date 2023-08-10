#include "main.h"

/**
  * free_grid - creates an arrar with malloc
  * @grid: size of array
  * @height: s
  *
  * Return: a char
  */
void free_grid(int **grid, int height)
{
	int i;
	for (i = 0; i < height; i++)
		free(gird[i]);
	free(grid);
}
