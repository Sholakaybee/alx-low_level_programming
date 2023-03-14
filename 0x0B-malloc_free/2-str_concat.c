#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string.
 * @s2: second string.
 *
 * Return: pointer of an array of chars
 */
char *str_concat(char *s1, char *s2)
{
	char *z;
	unsigned int i, x, k, limit;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;

	for (x = 0; s2[x] != '\0'; x++)
		;

	z = malloc(sizeof(char) * (i + x + 1));

	if (z == NULL)
	{
		free(z);
		return (NULL);
	}

	for (k = 0; k < i; k++)
		z[k] = s1[k];

	limit = x;
	for (x = 0; x <= limit; k++, x++)
		z[k] = s2[x];

	return (z);
}
