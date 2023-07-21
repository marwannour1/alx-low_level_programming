#include "main.h"

/**
  * main - checks if letter is upper
  * size: size
  *
  * Return: Always 0 (success)
  *
  */
void print_triangle(int size);
{
	int i, j, k;

	for (i = 0; i < size; i++)
		for (j = size - 1; j > 0; j--)
			_putchar(" ");
		for (k = 0; k <= i; k++)
			_putchar("#");
		_putchar("\n");

	return (0);
}
