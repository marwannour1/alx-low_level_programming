#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: check if number greater than 5
 * smaller than 6 or equal to zero
 *
 * Return: 0 (Success)
 */
int main(void)
{
	int n;
	int digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	digit = n % 10;
	if (digit > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, digit);
	else if (digit == 0)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, digit);
	else if (digit < 6)
		printf("Last digit of %i is %i and is 0\n", n, digit);
	return (0);
}
