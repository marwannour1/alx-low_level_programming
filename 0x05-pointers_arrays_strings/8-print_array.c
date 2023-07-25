#include "main.h"

/**
  * print_array - c
  * @a: p
  * @n: n
  * Return: 98
  */
void print_array(int *a, int n)
{
	int i;

	n -= 1;

	for (i = 0; i <= n; i++)
	{
		printf("%d", a[i]);
		if (i != n)
			printf(" ,");
		else
			printf("\n");
	}
}
