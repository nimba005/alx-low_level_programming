#include "main.h"

/**
 * _strpbrk - search on first occ of the char
 * @s: str
 * @accept: pointer variable
 * Return: always 0
 */
char *_strpbrk(char *s, char *accept)
{
int x;
while (*s)
{
for (x = 0; accept[x]; x++)
{
if (*s == accept[x])
return (s);
}
s++;
}
return ('\0');
}
