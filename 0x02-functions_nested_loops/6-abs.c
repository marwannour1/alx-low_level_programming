#include "main.h"

/**
  * _abs - absolute value
  *
  * @n: number to be checked
  *
  * Return: : 
  *
  */
int _abs(int n)
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
