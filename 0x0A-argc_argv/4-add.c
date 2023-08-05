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
	int sum = 0;
	char *p;

	while (--argc)
	{
		for (p = argv[argc]; *p; p++)
			if (*p < '0' || *p > '9')
			{
				printf("Error\n");
				return (1);
			}
		sum += atoi(argv[argc]);
	}
	printf("%d", sum);
	return (0);
}
