#include "main.h"
#include <stdlib.h>

/**
  * main - entry Point
  * @argc: argument count
  * @argv: argument vector
  *
  * Return: Always 0 (success)
  */
int main(int argc, char *argv[])
{
	int money;
	int i;
	int coins;
	int cents[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	money = atoi(argv[1]);
	coins = 0;
	for (i = 0; i < 5; i++)
	{
		if (money >= cents[i])
		{
			coins += money / cents[i];
			money %= cents[i];
			if (money == 0)
				break;
		}
	}
	printf("%d\n", coins);
	return (0);

}
