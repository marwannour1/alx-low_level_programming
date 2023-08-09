#include <ctype.h>
#include "main.h"

/**
  * _isdigit - checks if letter is upper
  * @c : number to be checked
  *
  * Return: 1 if upper 0 if lower
  *
  */
int _isdigit(int c)
{
	if (isdigit(c) > 0)
		return (1);
	return (0);
}
