#include "main.h"

/**
  * _isalpha - check if letter lowercase or uppercase
  *
  * @c: character to be checked
  *
  *Return: 1 if c is lower or upper and 0 otherwise
  *
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
