#include "main.h"

/**
  * leet - concaatenate two strings
  * @str: string to concatenate from
  *
  * Return: pointer
  *
  */
char *leet(char *str)
{
	char *strp = str
	char key[] = {'A', 'E', 'O', 'T', 'L'};
	int value[] = {4, 3, 0, 7, 1};
	int i;

	while (*strp)
	{
		for (i = 0; i < 5; i++)
		{
			if (*strp == key[i] || *strp == key[i] + 32)
				*strp = '0' + value[i];
		}
		strp++;
	}

	return (str);
}
