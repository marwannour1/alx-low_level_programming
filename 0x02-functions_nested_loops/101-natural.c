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
	int result = 0;
	int i;
	
	for (i = 3; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
			result += i;
	}
	printf("%d", result);
	return (0;)
}
