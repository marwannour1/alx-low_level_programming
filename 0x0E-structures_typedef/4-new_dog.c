#include "dog.h"

/**
  * new_dog - dhfhd
  * @name: dhfhd
  * @age: dhfh
  * @owner: hdfhd
  *
  * Return: dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int size_name = 0, size_owner = 0, i, j;

	if (!name || age < 0 || !owner)
		return (NULL);
	dog = (dog_t *) malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	while (name[size_name] != '\0')
		size_name++;
	while (owner[size_owner] != '\0')
		size_owner++;
	dog->name = malloc(sizeof(char) * size_name + 1);
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	dog->owner = malloc(sizeof(char) * size_owner + 1);
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < size_name; i++)
		(dog->name)[i] = name[i];
	(dog->name)[i] = '\0';

	for (j = 0; j < size_owner; j++)
		(dog->owner)[j] = owner[j];
	(dog->owner)[j] = '\0';
	dog->age = age;

	return (dog);
}
