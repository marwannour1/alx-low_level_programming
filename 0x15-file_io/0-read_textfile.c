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
	int fD;
	ssize_t bytes;
	char buffer[1024 * 8];

	if (filename == NULL || letters == 0)
		return (0);
	fD = open(filename, O_RDONLY);
	if (fD == -1)
		return (0);
	bytes = read(fD, buffer, letters);
	write(STDOUT_FILENO, buffer, bytes);
	close(fD);
	return (bytes);
}
