#ifndef DOG
#define DOG
#include <stdio.h>

/**
  * struct dog - dhdhf
  * @name: dhfh
  * @age: hdhf
  * @owner: dhfdh
  *
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG */
