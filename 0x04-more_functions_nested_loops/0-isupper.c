#include <ctype.h>
#inclde "main.h"

/**
  * _isupper - checks if letter is upper
  *
  * Return: 1 if upper 0 if lower
  *
  */
int _isupper(int c)
{
	if (isupper(c) > 0)
		return (1);
	return (0);
}
