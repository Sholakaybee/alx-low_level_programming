#include "main.h"
/**
 * read_textfile - this reads a file and prints it to the POSIX stdout.
 * @filename: This is the name of the file that needs to be read.
 * @letters: Is the number of letters the function should print.
 * Return: The actual number of letters it could read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int ptr;
	int i;
	int read_all;
	char *buf;

	if (filename == NULL)
		return (0);
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);
	ptr = open(filename, O_RDONLY);
	if (ptr == -1)
	{
		free(buf);
		return (0);
	}

	read_all = read(ptr, buf, letters);
	if (read_all == -1)
	{
		close(ptr);
		free(buf);
		return (0);
	}

	for (i = 0; i < read_all; i++)
	{
		if (write(STDOUT_FILENO, &buf[i], 1) == -1)
		{
			close(ptr);
			free(buf);
			return (0);
		}

	}
	close(ptr);
	free(buf);
	return (read_all);
}
