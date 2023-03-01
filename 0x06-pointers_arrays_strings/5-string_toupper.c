#include "main.h"

/**
 * string_toupper.c - changes all lowercase letters to uppercase
 * @str: the string to be changed
 * Return: success
 */

char *string_toupper(char *str)
{
int index = 0;
while (str[index])
{
if (str[index] >= 'a' && str[index] <= 'z')
str[index] -= 32;
index++;
}
return (str);
}
