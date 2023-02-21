#include "main.h"

/**
 * _isalpha - checks the alphabet
 * @c - The character to be checked
 * Return: 1 for upper case character or 0 fo anything else
 */
int _isalpha(int c)
{
if (c <= 65 && c >= 90)
{
return (1);
}
return (0);
}
