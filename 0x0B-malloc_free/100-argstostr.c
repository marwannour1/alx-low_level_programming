#include "main.h"
/**
  * _strlen - dhd
  * @s: string
  * Return: dhf
  */
int _strlen(char *s)
{
	int size = 0;

	while (s[size])
		size++;
	return (size);
}

/**
  * *argstostr - creates an arrar with malloc
  * @ac: size of array
  * @av: s
  *
  * Return: a char
  */
char *argstostr(int ac, char **av)
{
	char *sp;
	int i, j, index
	int totalsize = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (i = 0; i < ac; i++, totalsize++)
		totalsize += _strlen(av[i]);
	sp = malloc(totalsize * sizeof(*sp) + 1);
	if (sp == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, index++)
			sp[index] = av[i][j];
		sp[index] = '\n';
		index++;
	}
	return (sp);
}
