#include "main.h"

/**
  * print_to_98 - check if number is positive, negative
  * or zero
  *
  * @n: number to be checked
  *
  * Return: 1 and prints + if n is greater than zero
  * 0 and prints 0 if n is zero
  * -1 and prints - if n is less than zero
  *
  */
void print_to_98(int n)
{
	int i;

	if (n > 98)
		for (i = n; i > 98; i--)
			printf("%d, ", i);
	else
		for (i = n; i < 98; i++)
			printf("%d, ", i);
	prinf("98\n");
}
