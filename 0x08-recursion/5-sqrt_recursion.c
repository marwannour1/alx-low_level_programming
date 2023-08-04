#include "main.h"

int _sqrt(int n, int value);

/**
  * _sqrt_recursion - c
  * @n: p
  * Return: 98
  */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
  * _sqrt - c
  * @n: p
  * @value: y
  * Return: 98
  */
int _sqrt(int n, int value)
{
	if (value * value == n)
		return (value);
	if (value * value < n)
		return (_sqrt(n, vlaue + 1));
	return (-1);
}
