#include <time.h>
#include <stdio.h>

/**
 * main - Determines either greater than 5, is less than 6, or is 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alp[24] = "abcdfghijklmnoprstuvwxyz";
	int i;
	for (i=0; i < 24; i++)
    {
        putchar (alp[i]);
    }
    putchar ('\n');
	return (0);
}
