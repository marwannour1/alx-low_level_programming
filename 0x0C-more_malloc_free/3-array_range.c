

#include "main.h"

/**
  * array_range - creates an arrar with malloc
  * @min: size of array
  * @max: dhf
  * Return: a char
  */
int *array_range(int min, int max)
{
	int *m;
	int i = 0;

	if (min > max)
		return (NULL);
	m = malloc(sizeof(*m) * (max - min + 1));
	if (m == NULL)
		return (NULL);
	while (min <= max)
	{
		m[i] = min;
		min++;
		i++;
	}
	return (m);
}
