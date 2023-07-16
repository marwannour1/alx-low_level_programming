#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c = '0';

	while (c <= '9')
	{
		putchar(c);
		if (c != '9')
		{
			putchar(',');
			putchar(' ');
		}
		c += 1;
	}
	putchar('\n');
	return (0);
}
