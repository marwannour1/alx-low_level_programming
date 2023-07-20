#include "main.h"

/**
  * print_diagonal - checks if letter is upper
  * @n: number times
  *
  */
void print_diagonal(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
			_putchar(' ');
		_putchar('\\');
		putchar('\n');
	}
}
