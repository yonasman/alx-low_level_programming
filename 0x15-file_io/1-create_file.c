#include "main.h"

/**
 *create_file - a function that creates file
 *@filename: a pointer to file
 *@text_content: the content of the file
 *
 * Return: 1 on success or -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nlets;
	int rwr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}

	if (!text_content)
	{
		text_content = "";
	}

	for (nlets = 0; text_content[nlets]; nlets++)
	{
		rwr = write(fd, text_content, nlets);
	}

	if (rwr == -1)
	{
		return (-1);
	}

	close(fd);

	return (1);
}
