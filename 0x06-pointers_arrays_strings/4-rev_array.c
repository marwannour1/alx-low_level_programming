#include "main.h"

/**
  * reverse_array - c
  * @a: p
  * @n: n
  *
  * Return: 98
  */
void reverse_array(int *a, int n)
{
	int i;
	int tmp;

	for (i = 0; i < n / 2; i++)
	{
		tmp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = tmp;
	}
}
