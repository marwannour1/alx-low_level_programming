#include "main.h"
/**
  * times_table - last digit
  *
  *
  * Return: last digit of number
  *
  */
void times_table(void)
{
	int num1;
	int num2;

	for (num1 = 0; num1 < 10; num1++)
	{
		for (num2 = 0; num2 < 10; num2++)
		{
			if (num1 * num2 > 10)
			{
				_putchar('0' + (num1 * num2) / 10);
				_putchar('0' + (num1 * num2) % 10);
			}
			else
			{
				_putchar('0' + (num1 * num2));
			}
			if (num1 != 9)
				_putchar(',');
			if (num1 * num2 < 10)
				_putchar(' ');
			_putchar(' ');
		}
		_putchar('\n');
	}
}
