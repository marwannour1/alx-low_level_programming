#include "main.h"

/**
  * print_diagonal - checks if letter is upper
  * @n: number times
  *
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
			_putchar(' ');
		_putchar('\\');
		putchar('\n');
	}
}
