#include <unistd.h>

/**
 * _putchar - writes character c to stdout
 * @c: The caharacter to print
 * Return: on success 1, else on error -1(errno is set appropriately)
 */

int _putchar(char c)
{
return (write(1, &c, 1));
}
