#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_string - prints a string
 * @separator: the string to be printed
 * @n: the numer of string passed
 * @...: a variable number of string to be printed
 * description: If separator is NULL, don’t print it
 *              If one of the string is NULL, print (nil) instead
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
va_list strings;
char *str;
unsigned int index;
va_start(strings, n);
for (index = 0; index < n; index++)
{
str = va_arg(strings, char *);
if (str == NULL)
printf("%s", str);
if (index != (n - 1) && separator != NULL)
printf("%s", separator);
}
printf("\n");
va_end(strings);
}
