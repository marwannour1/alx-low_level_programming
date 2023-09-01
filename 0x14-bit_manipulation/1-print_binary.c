#include "main.h"

/**
  * print_binary - dhdhf
  * @n: dhfh
  *
  * Return: dhfhd
  */
void print_binary(unsigned long int n)
{
	unsigned long int mask = sizeof(n);
	unsigned int boolean = 0;

	while (mask)
	{
		if (n & 1L << --bit)
		{
			_putchar('1');
			boolean = 1;
		}
		else if (boolean)
			_putchar('0');
	}
}
