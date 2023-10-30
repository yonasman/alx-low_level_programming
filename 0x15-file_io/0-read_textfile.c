#include "main.h"

/**
 *read_textfile - reads a text file and prints to stdout
 *@filename: pointer to a file
 *@letters: the letters that are going to be read
 *
 *Return: the number of letters in a text that are read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t rd, wr;

	if (!filename)
	{
		return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		return (0);
	}
	rd = (fd, buffer, letters);
	wr = (STDOUT_FILENO, buffer, rd);

	close(fd);
	free(buffer);

	return (wr);
}
