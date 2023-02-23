#include "main.h"

/**
 * print_most_numbers - prints numbers between 0 to 9
 * (neither 2 nor 4).
 * Return: no return.
 */
void print_most_numbers(void)
{
	int s;

	for (s = 48; s < 58; s++)
	{
		if (s != 50 && s != 52)
			_putchar(s);
	}
	_putchar('\n');
}
