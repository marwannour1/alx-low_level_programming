#include "main.h"

/**
  * malloc_checked - creates an arrar with malloc
  * @b: size of array
  *
  * Return: a char
  */
void *malloc_checked(unsigned int b)
{
	int *m = malloc(b);

	if (m == NULL)
		exit(98);
	return (m);
}
