#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * close_file - print error if close the file_descriptor doesn't work
 *
 * @file_descriptor: the file_descriptor to be closed
 *
 * Return: nothing
*/
void close_file(int file_descriptor)
{
	int close_fd;

	close_fd = close(file_descriptor);

	if (close_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_descriptor);
		exit(100);
	}
}

/**
 * main - copie the content of a file to another file
 *
 *
 * @argc: count the number of argument
 * @argv: array of all arguments
 *
 * Return: 0 if success of exit 97, 98, 99 or 100 if error
*/
int main(int argc, char *argv[])
{
	int file_descriptor_from, file_descriptor_to, read_file, write_file;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	file_descriptor_from = open(argv[1], O_RDONLY);
	read_file = read(file_descriptor_from, buffer, 1024);
	file_descriptor_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	while (read_file > 0)
	{
		if (file_descriptor_from == -1 || read_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		write_file = write(file_descriptor_to, buffer, read_file);

		if (file_descriptor_to == -1 || write_file == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
		read_file = read(file_descriptor_from, buffer, 1024);
	}

	close_file(file_descriptor_from);
	close_file(file_descriptor_to);

	return (0);
}
