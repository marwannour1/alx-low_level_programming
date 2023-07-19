#include "main.h"

/**
  * print_sign - check if number is positive, negative
  * or zero
  *
  * @n: number to be checked
  *
  * Return: 1 and prints + if n is greater than zero
  * 0 and prints 0 if n is zero
  * -1 and prints - if n is less than zero
  *
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_printchar('-');
		return (-1);
	}
	else
	{
		_printchar(0);
		return (0);
	}
}