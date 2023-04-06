#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @index: index starting from 0
 * @n: pointer to the number to change
 * Return: 1 or -1 if fails
 */

int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 50)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
