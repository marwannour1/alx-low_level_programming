#include "dog.h"

/**
  * init_dog - dhfhd
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
	char *cpyName;
	char *cpyOwner;

	while(name[size_name])
		size_owner++;
	while(owner[size_owner])
		size_owner++;
	dog = (dog_t *) malloc(sizeof(dog_t));
	cpyName = malloc(sizeof(*cpyName) * size_name + 1);
	cpyOwner = malloc(sizeof(*cpyOwner) * size_owner + 1);
	if (cpyName || cpyOwner || dog)
		return (NULL);
	for (i = 0; i <= size_name; i++)
		cpyName[i] = name[i];
	for (j = 0; j <= size_owner; j++)
		cpyOwner[i] = owner[i];
	dog->name = cpyName;
	dog->age = age;
	dog->owner = cpyOwner;

	return (dog);
}
