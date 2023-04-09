#include "main.h"
/**
 * append_text_to_file - this appends text at the end of a file.
 * @filename: Name of the file.
 * @text_content: String to append at the end of the file.
 * Return: 1 if the file exist, -1 if the file does not exist
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int ptr;
	int i;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		return (1);
	ptr = open(filename, O_APPEND | O_WRONLY);
	if (ptr == -1)
		return (-1);
	for (i = 0; text_content[i] != '\0'; i++)
	{
		if (write(ptr, &text_content[i], 1) == -1)
		{
			close(ptr);
			return (-1);
		}
	}
	close(ptr);
	return (1);
}
