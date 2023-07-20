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

			if (k > 9)
			{
				_putchar('1');
				num = k % 10;
			}
			_putchar(num + '0');
		}
		_putchar('\n');
	}
}
