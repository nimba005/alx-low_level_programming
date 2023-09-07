#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: character to print
 * Return: on success 1, and errno is set appropriately
 */
int _putchar(char c);

/**
 * _puts - put a string
 * @s: string
 * Return: NOTHING
 */
void _puts(char *s)
{
while (*s != '\0')
{
_putchar(*s);
s++;
}
_putchar('\n');
}
