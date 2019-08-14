#include "holberton.h"



/**
 * main - copies the content of a file to another file.
 * @argc: argument counter
 * @argv: argument vector
 * Return: 98 if argument number invalid
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, size_write, size_read, clfrom, clto;
	char buff[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((size_read = read(file_from, buff, 1024)) != 0)
	{
		if (size_read == -1)
		{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		size_write = write(file_to, buff, size_read);
		if (size_write == -1)
		{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	clfrom = close(file_from);
	if (clfrom == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
		exit(100);
	}
	clto = close(file_to);
	if (clto == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
		exit(100);
	}
	return (0);
}
