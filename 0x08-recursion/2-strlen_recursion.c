#include "main.h"

/**
  * _strlen_recurison- c
  * @s: p
  * Return: 98
  */
int _strlen_recurison(char *s)
{
	int i = 0;

	if (*s == '\0')
	{
		return (i);
	}
	i += _strlen_recurison(s + 1) + 1;
}
