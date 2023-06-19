#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int f;

	for (f = 97; f < 123; f++)
	{
		if (f != 101 && f != 113)
		{
			putchar(f);
		}
	}
	putchar('\n');
	return (0);
}	
