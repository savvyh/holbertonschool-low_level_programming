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
	void *buffer;
	int file_descriptor;
	ssize_t read_file;

	if (filename == NULL)
		return (0);

	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor == -1)
		return (0);

	buffer = malloc(letters);
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

	if (write(STDOUT_FILENO, buffer, read_file) == -1)
	{
		free(buffer);
		close(file_descriptor);
		return (0);
	}

	free(buffer);
	close(file_descriptor);
	return (read_file);
}
