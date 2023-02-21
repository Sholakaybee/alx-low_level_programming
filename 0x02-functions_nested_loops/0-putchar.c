#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
  {
    int str[] = {95, 112, 117, 116, 99, 104, 97, 114};
	int t, u;

	u = sizeof(str) / sizeof(int);
	for (t = 0; t < u; t++)
	{
		putchar(str[count]);
	}
	putchar('\n');
    return (0);
}
