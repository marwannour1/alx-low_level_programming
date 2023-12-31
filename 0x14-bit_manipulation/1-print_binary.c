#include "main.h"

/**
  * print_binary - dhdhf
  * @n: dhfh
  *
  * Return: dhfhd
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = sizeof(n) * 8;
	unsigned int boolean = 0;

	while (mask)
	{
		if (n & 1L << --mask)
		{
			_putchar('1');
			boolean = 1;
		}
		else if (boolean)
			_putchar('0');
	}
	if (!boolean)
		_putchar('0');
}
