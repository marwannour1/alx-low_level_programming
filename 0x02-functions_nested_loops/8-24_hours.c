#include "main.h"
/**
  * jack_bauer - last digit
  *
  *
  * Return: last digit of number
  *
  */
void jack_bauer(void)
{
	int hours = 0;
	int minutes;

	for (hours; hours < 24; hours++)
	{
		minutes = 0;
		for (minutes; minutes < 60; minutes++)
		{
			_putchar('0' + hours / 10);
			_putchar('0' + hours % 10);
			_putchar('0' + minutes / 10);
			_putchar('0' + minutes % 10);
			_putchar('\n');
		}
	}
}
