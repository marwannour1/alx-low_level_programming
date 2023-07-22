#include <stdio.h>
/**
  * len_num - find length of number
  * @num : num to find length of
  *
  * Return : number of digits
  */
int len_num(int num)
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
		if (f1o > 0)
			printf("%lu", f1o);
		initials = len_num(mx) - 1 - len_num(f1);
		while (f1o > 0 && initials > 0)
		{
			printf("%d", 0);
			initials -= 1;
		}
		printf("%lu", f1);
		sum = (f1 + f2) % mx;
		sumo = f1o + f2o + (f1 + f2) / mx;
		f1 = f2;
		f1o = f2o;
		f2 = sum;
		f2o = sumo;
		if (i != 98)
			printf(", ");
	}
	printf("\n");
	return (0);
}
