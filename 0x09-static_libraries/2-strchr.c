#include "main.h"
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
	unsigned int g = 0;

	for (; *(s + g) != '\0'; g++)
		if (*(s + g) == c)
			return (s + g);
	if (*(s + g) == c)
		return (s + g);
	return ('\0');
}
