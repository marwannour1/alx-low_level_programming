#include "main.h"

/**
  * _strcpy - c
  * @dest: p
  * @src: n
  * Return: 98
  */
char *_strcpy(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
		j = i;
	}
	j++;
	dest[j] = '\0';

	return (dest);
}
