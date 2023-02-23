#include "main.h"

/**
 * print_numbers - print the number from 0 to 9
 * Description - Exclude numbers 2 and 4
 * Return: succes
 */

void print_most_numbers(void)

{
int x = 0;

for (; x <= 9; x++)
{
if (x == 2 || x == 4)
{
continue;
}
else
{
_putchar(x + '0');
}
}
_putchar('\n');
}
