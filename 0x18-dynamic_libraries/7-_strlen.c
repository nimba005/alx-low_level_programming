#include "main.h"

/**
 * _strlen - calculate the len of the str
 * @str: str to be calculated
 * Return: len
 */
int _strlen(char *str)
{
int len = 0;
while (*str != '\0')
{
len++;
str++;
}
return (len);
}
