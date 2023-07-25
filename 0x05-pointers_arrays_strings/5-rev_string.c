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
	int length;
	char tmp;

	while (s[length])
		length++;
	for (i = 0; i < length / 2; i++)
	{
		tmp = s[i];
		s[i] = s[length - 1 - i];
		s[length - 1- i] = tmp;
	}
}
