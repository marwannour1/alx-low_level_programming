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
	int n = 0;

	while (n < 10)
	{
		printf("%i", n);
		n += 1;
	}
	putchar('\n');
	return (0);
}
