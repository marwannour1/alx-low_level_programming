#include "main.h"

/**
  * _strncpy - c
  * @dest: p
  * @src: n
  * @n: n
  * Return: 98
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}

	return (dest);
}
