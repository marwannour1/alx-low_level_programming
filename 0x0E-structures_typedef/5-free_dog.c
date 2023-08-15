#include "dog.h"

/**
  * free_dog - dhfhd
  * @d: hdfh
  *
  * Return: void
  */
void free_dog(struct dog *d)
{
	if (d)
	{
		if (d->name)
			free(d->name);
		if (d->owner)
			free(d->owner);
		free(d);
	}
}
