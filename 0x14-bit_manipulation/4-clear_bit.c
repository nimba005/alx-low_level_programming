#include "main.h"

/**
 * clear_bit - sets the value of a bit to 0 at a given index
 * @index: index starting from 0
 * @n: pointer to a number to change
 * Return: 1 or -1 if fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 50)
return (-1);
*n = (~(1ul << index) & *n);
return (1);
}
