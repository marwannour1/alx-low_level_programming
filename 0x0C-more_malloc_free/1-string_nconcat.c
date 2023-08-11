#include "main.h"

/**
  *_strlen - size
  * @s:dhf
  *
  * Return: size
  */
int _strlen(char *s)
{
	unsigned int size = 0;

	while (s[size])
		size++;
	return (size);
}

/**
  * string_nconcat - creates an arrar with malloc
  * @s1: size of array
  * @s2: sdjd
  * @n: hdf
  * Return: a char
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int size1, size2, i, j;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	m = malloc(sizeof(*m) * (size1 + n + 1));
	if (m == NULL)
		return (NULL);
	if (n > size2)
		n = size2;
	for (i = 0; s1[i] != '\0'; i++)
	{
		m[i] = s1[i];
	}
	for (j = 0; j < n; j++)
	{
		m[i] = s2[j];
		i++;
	}
	m[i] = '\0';
	return (m);
}
