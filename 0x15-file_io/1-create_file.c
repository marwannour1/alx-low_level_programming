#include "main.h"

/**
  * _strlen - dshdhf
  * @s: djf
  *
  * Return: djf
  */
int _strlen(char *s)
{
	int i = 0;

	if (s == NULL)
		return (0);
	while (*s++)
		i++;
	return (i);
}

/**
  * create_file - read
  * @filename: dhfh
  * @text_content: hdfh
  *
  * Return: dhdhf
  */
int create_file(const char *filename, char *text_content)
{
	int fd;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 600);
	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	write(fd, text_content, _strlen(text_content));
	close (fd);
	return (1);
}
