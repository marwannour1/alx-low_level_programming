#include "main.h"

/**
  * _strchr - c
  * @s: p
  * @c: n
  * Return: 98
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	return ('\0');
}
