#include "main.h"

/**
 * print_times_table - Prints the n times table
 *
 * @n: number times table (0 < n <= 15)
 *
 * Return: no return
 */
void print_times_table(int n)
{
	int c, d, o;

	if (n >= 0 && n <= 15)
	{
		for (c = 0; c <= n; c++)
		{
			_putchar(48);
			for (d = 1; d <= n; d++)
			{
				o = c * d;
				_putchar(44);
				_putchar(32);
				if (o <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(o + 48);
				}
				else if (o <= 99)
				{
					_putchar(32);
					_putchar((o / 10) + 48);
					_putchar((o % 10) + 48);
				}
				else
				{
					_putchar(((o / 100) % 10) + 48);
					_putchar(((o / 10) % 10) + 48);
					_putchar((o % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
