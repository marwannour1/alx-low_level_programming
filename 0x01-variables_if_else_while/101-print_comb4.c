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
	int i = '0';
	int j;
	int k;

	while (i < '8')
	{
		j = i + 1;
		while (j <= '8')
		{
			k = j + 1;
			while (k <= '9')
			{

				putchar(i);
				putchar(j);
				putchar(j);
				if (i != '7')
				{
					putchar(',');
					putchar(' ');
				}
				k += 1;
			}
			j += 1;
		}
		i += 1;
	}
	putchar('\n');
	return (0);
}
