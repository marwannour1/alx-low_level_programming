#include "main.h"

/**
  * alloc_grid - creates an arrar with malloc
  * @width: size of array
  * @height: s
  *
  * Return: a char
  */
int **alloc_grid(int width, int height)
{
	int **gridp;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);
	gridp = malloc(height * sizeof(*gridp));
	if (gridp == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		gridp[i] = malloc(width * sizeof(**gridp));
		if (gridp[i] == NULL)
		{
			while (i--)
				free(gridp[i]);
			free(gridp);
			return (NULL);
		}
		for (j = 0; j < width; j++)
			gridp[i][j] = 0;
	}
	return (gridp);
}
