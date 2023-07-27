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
	int j;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	j = i + 1;
	dest[j] = '\0';

	return (dest);
}
