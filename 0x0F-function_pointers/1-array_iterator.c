#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - executes a function
 * @size: size of the array
 * @action: a pointer to the action
 * @array: arrays
 * return: success
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;

if (array == NULL || action == NULL)
return;
for (i = 0; i < size; i++)
{
action(array[i]);
}
}
