#include "main.h"

/**
 * binary_to_uint - this converts a binary number to an unsigned int
 * @b: it is a string representing a binary number
 * Return: The converted number or 0 if b is NULL or if there are chars
 * that are not 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int length;
	unsigned int i;
	unsigned int j;
	unsigned int sum;
	unsigned int z;
	int base;

	base = 2;
	sum = 0;
	z = 1;
	if (b == NULL)
		return (0);
	for (length = 0; b[length] != '\0'; length++)
		;
	if (length == 1 && (b[0] == '0' || b[0] == '1'))
		return ((b[0] - 48));
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		for (j = length - 1; j > 0; j--)
			z = z * base;
		sum = sum + (z * (b[i] - 48));
		length--;
		z = 1;
	}
	return (sum);
}
