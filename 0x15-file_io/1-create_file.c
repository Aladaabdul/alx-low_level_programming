#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - function that create file
 * @filename: file
 * @text_content: Text
 * Return: 1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t bytes_written;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC | S_IRUSR | S_IWUSR);
	if (fd == -1)
	{
		return (-1);
	}
	if (text_content == NULL)
	{
		close(fd);
		return (1);
	}
	bytes_written = write(fd, text_content, strlen(text_content));
	close(fd);

	if (bytes_written == -1)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}
