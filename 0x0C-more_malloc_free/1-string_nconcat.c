#include "main.h"

/**
  *_strlen - size
  * @s:dhf
  *
  * Return: size
  */
int _strlen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
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
	int size1, i;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size1 = _strlen(s1);
	size2 = _strlen(s2);
	if (n < size2)
		size2 = n;
	m = malloc(sizeof(*m) * (size1 + size2 + 1));
	if (m == NULL)
		return (NULL);
	for (i = 0; i <= size1 + size2; i++)
	{
		if (i < size1)
			m[i] = s1[i];
		else
			m[i] = s2[i - size1];
	}
	m[i] = '\0';
	return (m);
}
