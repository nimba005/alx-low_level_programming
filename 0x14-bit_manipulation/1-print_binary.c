#include "main.h"

/**
 * print_binary - prints binary reprensentation of a number
 * @n: unsigned long int
 * Return: success
 */

void print_binary(unsigned long int n)
{
/* checks if both n is zero, and binary reprentation */
if ((n >> 1) == 0 && n == 0)
{
_putchar('0');
return;
}
/* check if n has some binary digits to print */
if (n >> 1 != 0)
print_binary(n >> 1);
_putchar((n & 1) + '0');
}
