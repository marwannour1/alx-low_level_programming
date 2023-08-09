#include "main.h"

/**
  * _strpbrk- c
  * @s: p
  * @accept: n
  * Return: 98
  */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return ('\0');
}
