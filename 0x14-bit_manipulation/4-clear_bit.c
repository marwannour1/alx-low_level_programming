#include "main.h"

/**
  * clear_bit - dhdhf
  * @n: dhfh
  * @index: dhfhd
  * Return: dhfhd
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask = ~(1 << index);

	if (index >= sizeof(n) * 8)
		return (-1);
	*n = (*n) & mask;
	return (1);
}
