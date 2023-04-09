#include "main.h"
/**
 * create_file - this is a function that created a file
 * @filename: this is the name of the file to be created
 * @text_content: this is a string to write to the file
 * Return: 1 on success and -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int ptr;
	int num_letters;
	int z;

	if (!filename)
		return (-1);

	ptr = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (ptr == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (num_letters = 0; text_content[num_letters]; num_letters++)
		;

	z = write(ptr, text_content, num_letters);

	if (z == -1)
		return (-1);

	close(ptr);

	return (1);
}
