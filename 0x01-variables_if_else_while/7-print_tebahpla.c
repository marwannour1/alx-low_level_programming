#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c -= 1;
	}
	putchar('\n');
	return (0);
}
