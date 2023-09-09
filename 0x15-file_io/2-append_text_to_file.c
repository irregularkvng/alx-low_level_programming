#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: the text to append to the file
 *
 * Return: 1 on success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, res = -1;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND)
		if (fd < 0)
			return (-1);

	if (text_content != NULL)
	{
		ssize_t len = strlen(text_content);

		res = write(fd, text_content, len);
	}
	else
	{
		res = 1;
	}

	close(fd);
	return (res == -1 ? -1 : 1);
}
