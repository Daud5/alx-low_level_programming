#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char alp[26] = "abcdefghijklmnopqrstuvwxyz";
        int f;

        for (f = 0; f < 26; f++)
        {
                putchar(alp[f]);
        }
        putchar('\n');
        return (0);
}
