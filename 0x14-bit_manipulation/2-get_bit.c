#include "main.h"
/**
 * get_bit - this returns a value at a given index
 * @n: Unsigned long int input
 * @index:this is the index of the bit
 * Return: it returns the value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > (sizeof(8) * 8))
		return (-1);
	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
