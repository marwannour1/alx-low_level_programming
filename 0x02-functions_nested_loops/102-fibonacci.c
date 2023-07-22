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
	int num1 = 0;
	int num2 = 1;
	int i;
	int sum

	printf("")
	for (i = 0; i < 50; i++)
	{
		sum = num1 + num2;
		printf("%d\n", sum);
		num1 = num2;
		num2 = sum;
		if (i != 49)
			printf (", ");
		else
			printf("\n");
	}
	return (0);
}
