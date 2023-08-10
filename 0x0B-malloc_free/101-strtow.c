
#include "main.h"
/**
  * wordcount - dhd
  * @s: string
  * Return: dhf
  */
int wordcount(char *s)
{
	int i, n = 0;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == ' ')
		{
			if (s[i + 1] != ' ' && s[i + 1] != '\0')
				n++
		}
		else if (i == 0)
			n++;
	}
	n++;
	return (n)
}

/**
  * *strtow - creates an arrar with malloc
  * @str: size of array
  *
  * Return: a char
  */
char *strtow(char *str)
{
	char **sp;
	int size, i, j;

	if (str == NULL || *str == '\0')
		return (NULL);
	size = wordcount(str);
	if (size == 1)
		return (NULL)
	sp = malloc(sizeof(*sp) * size)
		if (sp == NULL)
			return (NULL);
	w[n - 1] = '\0';
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j])
		}
	}
}
