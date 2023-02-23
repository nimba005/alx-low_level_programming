#include "main.h"

/**
 * print_square - print square of a number
 * @size: The number of times
 * Return: success
 */

void print_square(int size)

{
int x, y;
if (size <= 0)
{
_putchar('\n');
}
else
{
for (x = 0; x < size; x++)
{
for (y = 0; y < size; y++)
{
_putchar(35);
}
_putchar('\n');
}
}
}
