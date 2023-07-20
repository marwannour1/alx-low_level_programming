#include "main.h"
/**
  * print_last_digit - last digit
  *
  * @n: number to operate on
  *
  * Return: last digit of number
  *
  */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	_putchar('0' + lastDigit);
	return (lastDigit);
}
