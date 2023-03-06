#include "main.h"

/**
 * _strpbrk - searches the string for any of a set of bytes
 * @s: the first string
 * @accept: the second string
 * Return: success
 */

char *_strpbrk(char *s, char *accept)
{
int k;
while (*s)
{
for (k = 0; accept[k]; k++)
{
if (*s == accept[k])
return (s);
}
s++;
}
return ('\0');
}
