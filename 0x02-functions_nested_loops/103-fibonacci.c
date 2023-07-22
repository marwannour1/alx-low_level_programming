#include <stdio.h>

/**
  * main - Entry point
  *
  *
  * Return: Always 0 (success)
  *
  */
int main(void)
{
	unsigned long num1 = 0;
	unsigned long num2 = 1;
	unsigned long sum = 0;
	unsigned long total = 0;

	while (1)
	{
		sum = num1 + num2;
		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total += sum;
		num1 = num2;
		num2 = sum;
	}
	printf("%lu\n", total);
	return (0);
}
