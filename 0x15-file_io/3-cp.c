#include "main.h"

/**
  * main - dhfh
  * @ac: djfd
  * @av: hdfhd
  * Return: dhfhd
  */
void main(int ac, char **av)
{
	int file_from, file_to;
	ssize_t size;
	char buffer[1024];

	if (ac != 3)
	{
		dprint(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(av[1], O_RDONLY);
	if (file_from == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}
	file_to = open(av[1], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprint(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		exit(99);
	}
	while ((size = read(file_from, buffer, 1024)) > 0)
	{
		if (size = write(file_to, buffer, 1024))
		{
			dprint(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			exit(99);
		}
	}
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %i\n", file_from);
		exit(100);
	}
	if (file_to)
	{
		dprint(STDERR_FILENO, "Error: Can't close fd %i\n", file_to);
		exit(100);
	}
	return (0);
}

