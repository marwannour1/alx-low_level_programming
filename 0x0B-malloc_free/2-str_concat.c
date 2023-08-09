
#include "main.h"

/**
  * str_concat - creates an arrar with malloc
  * @s1: size of array
  * @s2: s
  *
  * Return: a char
  */
char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i;
	char *sp;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';
	while (s1[size1])
		size1++;
	while (s2[size2])
		size2++;
	sp = malloc(size1 + size2 * sizeof(*s1) + 1);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i <= size1)
			sp[i] = s1[i];
		else
			sp[i] = s2[i];
	}
	sp[i] = '\0';
	return (sp);
}
