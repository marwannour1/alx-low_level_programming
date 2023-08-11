
#include "main.h"

/**
  * _calloc - creates an arrar with malloc
  * @nmemb: size of array
  * @size: dhf
  * Return: a char
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int n = nmemb * size;
	void *m;
	char *pt;

	if (nmemb == 0 || size == 0)
		return (NULL);
	m = malloc(n);
	if (m == NULL)
		return (NULL);
	pt = m;
	while (n--)
		*pt++ = (char) 0;
	return (m);
}
