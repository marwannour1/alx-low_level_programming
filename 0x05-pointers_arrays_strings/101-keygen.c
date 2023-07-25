#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/**
  * main -entry point generate random password
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	char c;
	int sum;

	srand(time(NULL));
	while (sum <= 3000)
	{
		c = rand() % 128;
		sum += c;
		putchar(c);
	}
	return (0);
}

