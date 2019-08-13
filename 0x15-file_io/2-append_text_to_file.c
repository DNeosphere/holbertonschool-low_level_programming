#include "holberton.h"
/**
 * append_text_to_file - appends text to a file
 * @filename: name of the file
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_d, len;
	ssize_t size_write;

	if (filename == NULL)
		return (-1);

	file_d = open(filename, O_APPEND | O_WRONLY);
	if (file_d == -1)
		return (-1);

	if (text_content == NULL)
	{
		if (file_d == -1)
			return (-1);
		else
			return (1);
	}


	for (len = 0; text_content[len] != '\0'; len++)
		;

	size_write = write(file_d, text_content, len);
	if (size_write == -1)
		return (-1);
	close(file_d);
	return (1);
}
