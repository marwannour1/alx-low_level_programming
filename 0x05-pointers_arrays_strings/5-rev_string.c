#include "main.h"

/**
  * print_rev - c
  * @s: p
  *
  * Return: 98
  */
void print_rev(char *s)
{
	int i = 0;
	int j = 0;
	char tmp;

	while (s[i])
		i++;

	while (j++ < i / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
	}
	_putchar('\n');
}
