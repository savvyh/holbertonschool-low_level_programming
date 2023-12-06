#include "main.h"
/**
 * create_file - function that create a file
 *
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 if success or -1 if it failed
 */
int create_file(const char *filename, char *text_content)
{
	int file_descriptor, write_file;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (file_descriptor == -1)
		return (-1);

	if (text_content != NULL)
	{
		write_file = write(file_descriptor, text_content, _strlen(text_content));
		if (write_file == -1)
		{
			close(file_descriptor);
			return (-1);
		}
	}

	close(file_descriptor);
	return (1);
}