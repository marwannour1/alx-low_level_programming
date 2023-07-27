#include "main.h"

/**
  * _strcat - concaatenate two strings
  * @dest: string to concatenate to
  * @src: string to concatenate from
  *
  * Return: pointer
  *
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	for (i = 0; dest[i]; i++)
		;
	for (j = 0; src[j]; j++, i++)
		dest[i] = src[j];
	dest[i] = '\0';

	return (dest);
}
