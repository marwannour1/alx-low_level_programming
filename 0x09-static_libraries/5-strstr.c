#include "main.h"

/**
  * _strstr- c
  * @haystack: p
  * @needle: n
  * Return: 98
  */
char *_strstr(char *haystack, char *needle)
{
	char *h;
	char *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*h && *n && (*h == *n))
		{
			h++;
			n++;
		}
		if (*n == '\0')
			return (haystack);
		haystack++;
	}
	return ('\0');
}
