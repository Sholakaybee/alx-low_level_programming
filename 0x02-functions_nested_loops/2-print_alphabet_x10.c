#include "main.h"

/**
 * print_alphabet_x10 - Prints the alphabet 10 times.
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int g, h;

	for (g = 0; g <= 9; g++)
	{
		for (h = 97; h <= 122; h++)
		{
			_putchar(h);
		}
	_putchar('\n');
	}
}
