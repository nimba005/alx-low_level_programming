#include "main.h"

/**
 * print_diagonal - prints a diagonal line
 * @n: The number of lines to be printed
 * Return: success
 */

void print_diagonal(int n)

{
int x;

if (n <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < n; x++)
{
_putchar(92);
}
_putchar('\n');
}
}
