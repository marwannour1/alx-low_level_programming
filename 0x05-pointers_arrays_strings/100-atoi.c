#include "main.h"

/**
  * _atoi - c
  * @s: p
  *
  * Return: 98
  */
int _atoi(char *s)
{
	unsigned int num = 0;
	int sign = 1;

	while (*s++)
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '0')
			num = (num * 10) + (*s - '0');
		else if (num > 0)
			break;
	}

	return (num * sign);
}
