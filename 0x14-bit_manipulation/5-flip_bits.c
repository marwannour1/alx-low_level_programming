#include "main.h"

/**
  * flip_bits - dhdhf
  * @n: dhfh
  * @index: dhfhd
  * Return: dhfhd
  */
unsigned int clear_bit(unsigned long int n, unsigned long int m)
{
	unsigned long int mask = n ^ m;
	unsigned int count = 0;

	while (mask)
	{
		if (mask & 1)
			count++;
		mask = mask >> 1;
	}
	return (count);
}
