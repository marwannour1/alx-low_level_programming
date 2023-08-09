#include "main.h"

/**
  * _strncat - concaatenate two strings
  * @dest: string to concatenate to
  * @src: string to concatenate from
  * @n: n
  *
  * Return: pointer
  *
  */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; j < n && src[j] != '\0'; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
