#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>

#define BUFFER_SIZE 1024
/**
 * print_error - Function
 * @message: Message
 * Return: 0
 */
void print_error(const char *message)
{
	dprintf(STDERR_FILENO, "Error: %s\n", message);
}
/**
 * main - Function
 * @argc: arg count
 * @argv: arg var
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int fd_source, fd_dest;
	const char *file_from, *file_to;
	char buffer[BUFFER_SIZE];
	ssize_t bytes_read;

	if (argc != 3)
	{
		print_error("Usage: cp file_from file_to");
		return (97);
	}

	file_from = argv[1];
	file_to = argv[2];

	fd_source = open(file_from, O_RDONLY);
	if (fd_source == -1)
	{
		print_error("Can't read from file");
		return (98);
	}
	fd_dest = open(file_to, O_WRONLY | O_CREAT | O_TRUNC, 0644);

	if (fd_dest == -1)
	{
		print_error("Can't write to file");
		close(fd_source);
		return (99);
	}

	while ((bytes_read = read(fd_source, buffer, sizeof(buffer))) > 0)
	{
		ssize_t bytes_written = write(fd_dest, buffer, bytes_read);
		if (bytes_written == -1)
		{
			print_error("Can't write to file");
			close(fd_source);
			close(fd_dest);
			return (99);
		}
	}

	if (bytes_read == -1)
	{
		print_error("Cant read from file");
		close(fd_source);
		close(fd_dest);
		return (98);
	}
	if (close(fd_source) == -1 || close(fd_dest) == -1)
	{
		print_error("Cant close fd");
		return (100);
	}
	return (0);
}
