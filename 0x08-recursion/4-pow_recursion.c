#include "main.h"

/**
  * _pow_recursion- c
  * @x: p
  * @y: y
  * Return: 98
  */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}