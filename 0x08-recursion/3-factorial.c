#include "main.h"

/**
  * factorial- c
  * @n: p
  * Return: 98
  */
int factorial(int n)
{
	if (n < 0)
		return (-1)
	if (n == 1 || n == 0)
	{
		return (1) 
	}
	return (n * factorial(n - 1));
}
