#include "main.h"
/**
  * puts2 - c
  * @str: p
  *
  * Return: 98
  */
void puts2(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (i % 2 == 0)
			_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
