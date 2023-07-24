#include "main.h"

/**
  * print_number - Entry point
  * @n: number to be processed
  */
void print_number(int n)
{
	int divisor = 1;
	int num = n;
	int digit;

	if (num < 0)
		_putchar('-');
	while (num < -9 || num > 9)
	{
		num /= 10;
		divisor *= 10;
	}
	while (divisor != 0)
	{
		digit = n / divisor;
		n = n - digit * divisor;
		_putchar('0' + digit);
		divisor /= 10;
	}
}
