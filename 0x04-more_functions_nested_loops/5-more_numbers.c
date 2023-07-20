#include "main.h"

/**
  * more_numbers - checks if letter is upper
  *
  */
void more_numbers(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		int num = i;

		while (num)
		{
			_printchar('0' + num % 10);
			num /= 10;
		}
	}
	_putchar('\n');
}
