#include "main.h"

/**
  * _strstr- c
  * @s: p
  * @accept: n
  * Return: 98
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; needle[j] ; j++)
		{
			if (s[i] == accept[j])
				continue;
			else
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return ('\0');
}
