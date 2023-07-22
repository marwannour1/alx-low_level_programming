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
	int i;
	unsigned long sum;

	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%lu", sum);
		num1 = num2;
		num2 = sum;
		if (i != 49)
			printf(", ");
	}
	printf("\n");
	return (0);
}
