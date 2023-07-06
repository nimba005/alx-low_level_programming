#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 * @b: points to string of 0 and chars 1
 * Return: converted number
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int y = 0;
unsigned int result = 0;
if (b == NULL)
return (0);

while (b[y] != '\0')
{
if (b[y] != '0' && b[y] != '1')
return (0);
result <<= 1;
if (b[y] & 1)
result += 1;
y += 1;
}
return (result);
}
