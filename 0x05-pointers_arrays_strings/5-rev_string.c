#include "main.h"

/**
  * rev_string - c
  * @s: p
  *
  * Return: 98
  */
void rev_string(char *s)
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
