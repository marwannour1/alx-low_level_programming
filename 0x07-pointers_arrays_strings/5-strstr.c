#include "main.h"

/**
  * _strstr- c
  * @haystack: p
  * @needle: n
  * Return: 98
  */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k;

	for (i = 0; haystack[i]; i++)
	{
		k = i;
		while (needle[j] && haystack[k])
		{
			if (haystack[k] == needle[j])
			{
				j++;
				k++;
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
