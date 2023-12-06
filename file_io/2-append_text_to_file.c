#include "main.h"
/**
 * append_text_to_file - function that add a text at the end of a file
 *
 * @filename: the name of the file
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 if success or -1 if it failed
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descriptor, write_file;

	if (filename == NULL)
		return (-1);

	file_descriptor = open(filename, O_RDWR | O_APPEND);
	if (file_descriptor == -1)
		return (-1);

	if (text_content)
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
/**
 * _strlen - the lenght of a string
 * @s: the string
 * Return: lenght of a string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}
