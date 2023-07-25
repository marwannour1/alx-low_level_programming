#include "main.h"

/**
  * rev_string - c
  * @s: p
  *
  * Return: 98
  */
void rev_string(char *s)
{
	int i;
	int j = 0;
	int length;
	char tmp;

	while (s[length])
		length++;
	i = length;

	while (j++ < length / 2)
	{
		tmp = s[i];
		s[i] = s[j];
		s[j] = tmp;
		i--;
	}
	_putchar('\n');
}
