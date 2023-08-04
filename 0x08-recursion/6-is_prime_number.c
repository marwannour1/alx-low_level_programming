#include "main.h"

int div(int n, int value);

/**
  * is_prime_number - c
  * @n: p
  * Return: 98
  */
int is_prime_number(int n)
{
	return (div(n, 2));
}

/**
  * div - c
  * @n: p
  * @value: y
  * Return: 98
  */
int div(int n, int value)
{
	if (value >= n / 2 && n > 1)
		return (1);
	if (n % value == 0 || n <= 1)
		return (0);
	return (div(n, value + 1));
}
