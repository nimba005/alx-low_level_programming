#include "main.h"

/**
 * _isdigit - check if a character is a digit
 * @c - The number to be checked
 * Return: 1 if its a digit and 0 else
 */

int _isdigit(int c)
{
if (c >= 48 && c <= 57)
{
return (1);
}
return (0);
}
