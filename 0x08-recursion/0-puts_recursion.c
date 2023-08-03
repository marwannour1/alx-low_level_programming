#include "main.h"

/**
  * _puts_recursion - c
  * @s: p
  * Return: 98
  */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');
	_putchar(*s);
	_puts_recursion(s++)
}
