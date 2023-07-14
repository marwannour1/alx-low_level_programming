#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 * Description: check if number positive, negative
 * or equal to zero
 *
 * Retrun: 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive");
	else if (n < 0)
		printf("%i is negative");
	else
		printf("%i is zero");
}
