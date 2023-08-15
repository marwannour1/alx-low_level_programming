#ifndef DOG
#define DOG
#include <stdio.h>
#include <stdlib.h>

/**
  * struct dog - dhdhf
  * @name: dhfh
  * @age: hdhf
  * @owner: dhfdh
  *
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif /* DOG */
