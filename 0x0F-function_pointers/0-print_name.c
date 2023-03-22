#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints name using pointer to a function
 * @name: string to add
 * @f: pointer to a fuction
 * return: nothing
 */

void print_name(char *name, void (*f)(char *))
{
if (name == NULL || f == NULL)
return;
f(name);
}
