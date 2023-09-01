#include "main.h"

/**
  * binary_to_unit - dhdhf
  * @b: dhfh
  *
  * Return: dhfhd
  */
unsigned int binary_to_unit(const char *b)
{
	unsigned int result = 0;

	if (!b)
		return (0);
	while (*ptr)
	{
		if (!(*b == '0' || *b == '1'))
			return (0);
		result = result * 2 + (*b++ - '0');
	}
	return (result);
}
