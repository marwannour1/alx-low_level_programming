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
	char c0 = 'a';
	char c1 = 'A';

	while (c0 <= 'z')
	{
		putchar(c0);
		c0 += 1;
	}
	while (c1 <= 'Z')
	{
		putchar(c1);
		c1 += 1;
	}
	putchar('\n');
	return (0);
}
