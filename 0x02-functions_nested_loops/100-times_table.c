#include "main.h"
/**
  * print_times_table - last digit
  * @num: stopping condition
  *
  * Return: last digit of number
  *
  */
void print_times_table(int num)
{
	int num1;
	int num2;

	if (num > 15 || num < 0)
		return;

	for (num1 = 0; num1 <= num; num1++)
	{
		for (num2 = 0; num2 <= num; num2++)
		{
			if (num1 * num2 >= 10)
			{
				_putchar('0' + (num1 * num2) / 10);
				_putchar('0' + (num1 * num2) % 10);
			}
			else
			{
				_putchar('0' + (num1 * num2));
			}
			if (num2 != num)
				_putchar(',');
			else
			{
				continue;
			}
			if (num1 * (num2 + 1) < 10)
				_putchar(' ');
			if (num1 * (num2 + 1) < 100)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
