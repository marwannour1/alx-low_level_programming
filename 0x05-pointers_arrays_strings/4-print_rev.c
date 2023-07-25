#include "main.h"

/**
  * print_rev - c
  * @str: p
  *
  * Return: 98
  */
void print_rev(char *str)
{
	int i = 0;

	while (str[i])
		i++;

	while(i--)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
