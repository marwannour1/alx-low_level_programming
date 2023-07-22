#include <stdio.h>
/**
  * len_num - find length of number
  * @num : num to find length of
  *
  * Return : number of digits
  */
int len_num(num)
{
	int length = 0;
	if (!num)
		return (1);
	while (num)
	{
		num /= 10;
		length += 1;
	}
	return (length);
}

/**
  * main - Entry point
  *
  *
  * Return: Always 0 (success)
  *
  */
int main(void)
{
	unsigned long f1 = 1, f2 = 2, sum, mx = 100000000, f1o = 0, fo = 0, sumo = 0;
	int i, initials;

	for (i = 0; i < 98; i++)
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
