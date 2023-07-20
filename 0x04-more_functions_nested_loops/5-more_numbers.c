#include "main.h"

/**
  * more_numbers - checks if letter is upper
  *
  */
void more_numbers(void)
{
	int i;
	int k;
	int num;

	for (i = 0; i < 11; i++)
	{
		for (k = 0; k < 15; k++)
		{
			num = k;

			while (num > 0)
			{
				_putchar('0' + num % 10);
				num /= 10;
			}
		}
		_putchar('\n');
	}
	_putchar('\n');
}
