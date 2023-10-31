#include "main.h"

/**
 *append_text_to_file - a functions that adds a text to a file
 *@filename: name of the file
 *@text_content: content of the text
 *
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nlets;
	int rwr;

	if (!filename)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
	{
		return (-1);
	}

	if (text_content)
	{
		for (nlets = 0; text_content[nlets]; nlets++)
		{
			rwr = write(fd, text_content, nlets);
		}
		if (rwr == -1)
		{
			return (-1);
		}
	}

	close(fd);

	return (1);
}
