#include "main.h"

/**
  * get_bit - dhdhf
  * @n: dhfh
  * @index: dhfhd
  * Return: dhfhd
  */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1 << index;

	if (index >= sizeof(n) * 8)
		return (-1);
	if (n & mask)
		return (1);
	return (0);
}
