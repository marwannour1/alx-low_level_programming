#include "main.h"

/**
  * _strdup - creates an arrar with malloc
  * @str: size of array
  *
  * Return: a char
  */
char *_strdup(char *str)
{
	int size = 0;
	int i;
	
	if (str == NULL)
		return (NULL)
	while (str[size])
		size++;
	char *sp = malloc(size * sizeof(*str) + 1);
	if (sp == 0)
		return ('\0');
	for (i = 0; i <= size + 1; i++)
		sp[i] = str[i];
	return (sp)
}
