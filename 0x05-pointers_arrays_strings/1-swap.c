#include "main.h"

/**
  * swap_int - c
  * @a: p
  * @b: p
  *
  * Return: 98
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
