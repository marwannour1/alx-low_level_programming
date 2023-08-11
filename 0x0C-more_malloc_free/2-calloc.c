
#include "main.h"

/**
  * _calloc - creates an arrar with malloc
  * @nmemb: size of array
  * @size: dhf
  * Return: a char
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	unsigned int n = nmemb * size;
	void *m = malloc(n);
	char *pt = m;

	if (m == NULL || size == 0 || nmemb == 0)
		return (NULL);
		while (n--)
			*pt++ = (char) 0;
	return (m);
}
