#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include "main.h"
/**
 * create_file - creates a file
 * @filename: a pointer to the name of the file to create
 * @text_content: a pointer to the string to write to the file.
 * Return: 1 if the function fails, otherwise -1.
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, num_written;
	mode_t mode = S_IRUSR | S_IWUSR;

	if (filename == NULL)
		return (-1);
	file_descriptor = open(filename, O_WRONLY | O_CREAT | O_TRUNC, mode);
	if (file_descriptor == -1)
		return (-1);
	if (text_content != NULL)
	{
		num_written = write(file_descriptor, text_content, strlen(text_content));
		if (num_written == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}
