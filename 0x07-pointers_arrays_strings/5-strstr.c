#include "main.h"

/**
  * _strstr- c
  * @haystack: p
  * @needle: n
  * Return: 98
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j;

	for (i = 0; haystack[i]; i++)
	{
		for (j = 0; needle[j];)
		{
			if (haystack[i] == needle[j])
			{
				j++;
				continue;
			}
			else
				break;
		}
		if (needle[j] == '\0')
			return (haystack + i);
	}

	return ('\0');
}
