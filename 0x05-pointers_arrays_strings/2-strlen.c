#include "main.h"

/**
  * _strlen - c
  * @s: p
  *
  * Return: 98
  */
int _strlen(int *s)
{
	int counter;

	for (counter = 0; *s != '\0'; s++)
		counter++;

	return (counter);
}
