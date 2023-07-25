#include "main.h"

/**
  * puts_half - c
  * @str: p
  *
  * Return: 98
  */
void puts_half(char *str)
{
	int i;
	int length = 0;
	char tmp;

	while (str[length])
		length++;
	for (i = length / 2; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
