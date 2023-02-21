#include "main.h"

/**
 * print_alphabet_x10 - Print alphabet
 * Return: void
 */

void print_alphabet_x10(void)
{
char b;
int e = 9;
while (e <= 9)
{
for (b = '0'; b <= '9'; b++)
{
_putchar(b);
}
_putchar('\n');
e++;
}
}

