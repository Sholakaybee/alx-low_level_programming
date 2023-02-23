#include "main.h"

/**
 * print_numbers - prints num from 0-9
 * Return: void
 */
void print_numbers(void)
{
	char b;

	for (b = '0'; b <= '9'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
