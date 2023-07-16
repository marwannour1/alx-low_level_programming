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
	int j = '0';
	int k = '0';
	int l;


	while (i <= '9')
	{
		while (j <= '8')
		{
			while (k <= '9')
			{
				l = j + 1;
				while (l <= '9')
				{

					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(k);
					putchar(l);
					if (i != '9')
					{
						putchar(',');
						putchar(' ');
					}
					l += 1;
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
