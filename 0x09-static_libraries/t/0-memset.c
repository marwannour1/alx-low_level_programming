#include "main.h"

/**
  * _memset - c
  * @s: p
  * @b: n
  * @n: n
  * Return: 98
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n - 1; i++)
	{
		s[i] = b;
	}

	return (s);
}
