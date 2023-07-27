#include "main.h"

/**
  * cap_string - concaatenate two strings
  * @str: string to concatenate from
  *
  * Return: pointer
  *
  */
char *cap_string(char *str)
{
	int i;
	int j;
	char delim[] = " \t\n,.!?\"(){}";

	if (str[0] >= 'a' && str[0] <= 'z')
		str[i] = str[i] - 'a' + 'A';
	for (i = 1; str[i]; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			for (j = 0; j < 12; j++)
				if (str[i - 1] == delim[j])
					str[i] = str[i] - 'a' + 'A';
		}
	}

	return (str);
}
