#include "main.h"

/**
  * print_triangle - checks if letter is upper
  * @size: size
  *
  */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		for (j = size - 1; j > i; j--)
			_putchar(' ');
		for (k = 0; k <= i; k++)
			_putchar('#');
		_putchar('\n');
	}
}
