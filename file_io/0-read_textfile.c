#include "main.h"
/**
 * read_textfile - function that reads text file & prints to the POSIX stdout
 *
 * @filename: name of the file which contains letters
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t read_file, write_file;
	char *buffer;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(file_descriptor);
		return (0);
	}

	read_file = read(file_descriptor, buffer, letters);
	if (read_file == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	write_file = write(STDOUT_FILENO, buffer, read_file);
	if (write_file == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	close(file_descriptor);
	free(buffer);
	return (write_file);
}
