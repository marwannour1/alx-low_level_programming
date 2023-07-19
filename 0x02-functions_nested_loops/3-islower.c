#include "main.h"
#include <ctype.h>

/**
  * _islower - check if letter lowercase
  *
  * @c: character to be checked
  *
  *Return: 1 if c is lower and 0 if not lower
  *
  */
int _islower(int c)
{
	return (islower(c) == 1);
}
