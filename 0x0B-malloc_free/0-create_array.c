#include "main.h"

/**
  * create_array - creates an arrar with malloc
  * @size: size of array
  * @c: default char
  *
  * Return: a char
  */
char *create_array(unsigned int size, char c)
{
	char *cp = malloc(size);

	if (size == 0 || cp == 0)
		return ('\0');
	while (size--)
		cp[size] = c;
	return (cp);
}
