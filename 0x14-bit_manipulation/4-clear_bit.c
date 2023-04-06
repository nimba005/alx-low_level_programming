#include "main.h"

/**
 * clear_bit - sets the value of bit to 0 at a given index
 * @index: index starting from 0
 * @n: pointer to the number to change
 * Return: 1 or -1 if it fails
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 50)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
