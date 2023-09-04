#include "main.h"

/**
  * read_textfile - read
  * @filename: dhfh
  * @letters: hdfh
  *
  * Return: dhdhf
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fD = open(filename, O_RDONLY);
	ssize_t bytes;
	char buffer[8192];

	if (filename == NULL || letters == 0 || fD == -1)
		return (0);
	bytes = read(fD, buffer, letters);
	close(fD);
	return (bytes);
}
