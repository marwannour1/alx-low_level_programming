#include "main.h"

/**
  * print_diagsums - c
  * @a: p
  * @size: n
  * Return: 98
  */
void print_diagsums(int *a, int size)
{
	int i;
	int sumd1 = 0;
	int sumd2 = 0;

	for (i = 0; i < size; i++)
	{
		sumd1 += a[i];
		sumd2 += a[size - 1 - i];
		a += size;
	}

	printf("%d, %d\n", sumd1, sumd2);
}
