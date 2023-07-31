#include "main.h"

/**
  * _strspn - c
  * @s: p
  * @accept: n
  * Return: 98
  */
unsigned int *_strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j] != s[i]; j++)
		{
			if (accept[j] == '\0')
				return (i);
		}
	}

	return (i);
}
