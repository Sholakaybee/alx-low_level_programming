#include "main.h"

/**
 * print_numbers - prints num from 0-9
 * Return: void
 */
void print_numbers(void)
{
	char a;

	for (a = '0'; a <= '9'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
