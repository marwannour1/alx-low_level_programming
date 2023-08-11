
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
	void *m = malloc(size * nmemb);
	int *pt = m

	if (m == NULL || size == 0 || nmemb == 0)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		pt[i] = 0;
	return (m);
}
