#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print hex
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c = '0';

	while (c <= 'f')
	{
		if (c == '9' + 1)
			c += 'a' - '9' - 1;
		putchar(c);
		c += 1;
	}
	putchar('\n');
	return (0);
}
