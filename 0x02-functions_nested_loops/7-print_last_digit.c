#include "main.h"

/**
 * print_last_digit - a function the prints last digit
 * @j - the number to be checked
 * Return: Value of the last digit of a number
 */
int print_last_digit(int j)
{
int last;
last = j % 10;
if (last < 0)
{
last = last * -1;
}
_putchar(last + '0');
return (last);
}
