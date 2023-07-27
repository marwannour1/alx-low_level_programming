#include "main.h"

/**
  * string_toupper - concaatenate two strings
  * @str: string to concatenate from
  *
  * Return: pointer
  *
  */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 'a' + 'A';
	}

	return (str);
}
