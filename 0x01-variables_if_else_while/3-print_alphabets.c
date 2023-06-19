#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alp[52] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
        int f;

	for (f = 0; f < 52; f++)
	{
		putchar(alp[f]);
	}
	putchar('\n');
	return (0);
}	
