#include "main.h"

/**
  * _strcmp - c
  * @s1: p
  * @s2: n
  * Return: 98
  */
int _strcmp(char *s1, char *s2)
{
	int i;
	int cmp = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			cmp = (s1[i] - '0') - (s2[i] - '0');
			break;
		}
	}

	return (cmp);
}
