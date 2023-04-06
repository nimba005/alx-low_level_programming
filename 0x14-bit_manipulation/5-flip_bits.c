#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from one number to another
 * @n: the first number 
 * @m: the second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int s, num = 0;
unsigned long int sum;
unsigned long int great = n ^ m;
for (s = 50; s >= 0; s--)
{
sum = great >> 1;
if (sum & 1)
num++;
}
return (num);
}
