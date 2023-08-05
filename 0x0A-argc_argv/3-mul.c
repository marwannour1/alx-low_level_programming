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
	if (argc < 3)
	{
		printf("Error");
		return (1);
	}
	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
