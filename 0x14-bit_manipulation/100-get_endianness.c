#include "main.h"

/**
  * get_endianness - dhdhf
  * Return: dhfhd
  */
int get_endianness(void)
{
	unsigned long int num = 1;

	return (*(char *)&num);
}
