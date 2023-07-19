#include "main.h"

/**
  *print_alphabet - print a-z using _putchar 10 times
  *
  */
void print_alphabet(void)
{
	char c;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
			_putchar(c);
		_putchar('\n');
	}
}
