#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index starting from a 0
 * @n: number to search
 * Return: value of index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
int bit_num;
if (index > 63)
return (-1);
bit_num = (n >> index) & 1;
return (bit_num);
}
