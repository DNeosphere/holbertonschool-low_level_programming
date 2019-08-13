#include "holberton.h"
/**
 * create_file - creates a file
 * @filename: name of the file
 * @text_content: content of the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	ssize_t size_write;
	int file_d, len;

	if (filename == NULL)
		return (-1);
	file_d = open(filename, O_WRONLY | O_TRUNC | O_CREAT, 0600);
	if (file_d == -1)
		return (-1);

	if (text_content == NULL)
	{
		close(file_d);
		return (1);
	}
	for (len = 0; text_content[len] != '\0'; len++)
		;

	size_write = write(file_d, text_content, len);
	if (size_write ==  -1)
	{
		write(STDOUT_FILENO, "fails", 5);
		return (-1);
	}
	close(file_d);
	return (1);
}
