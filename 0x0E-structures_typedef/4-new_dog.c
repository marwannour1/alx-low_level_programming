#include "dog.h"

/**
  * init_dog - dhfhd
  * @name: dhfhd
  * @age: dhfh
  * @owner: hdfhd
  *
  * Return: dog_t
  */
dog_t new_dog(char *name, float age, char *owner)
{
	dog_t newDog;
	int size_name = 0, size_owner = 0, i, j;
	char *cpyName;
	char *cpyOwner;

	while(name[size_name])
		size_owner++;
	while(owner[size_owner])
		size_owner++;
	cpyName = malloc(sizeof(*cpyName) * size_name + 1);
	cpyOwner = malloc(sizeof(*cpyOwner) * size_Owner + 1);
	if (cpyName || cpyOwner)
		return (NULL);
	for (i = 0; i <= size_name; i++)
		cpyName[i] = name[i];
	for (j = 0; j <= size_owner; j++)
		cpyOwner[i] = owner[i];
	newDog.name = cpyName;
	newDog.age = age;
	newDog.owner = cpyOwner;
}
