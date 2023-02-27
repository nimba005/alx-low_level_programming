#include <stdio.h>

/**
 * swap_int - swaps the values of two integers
 * @a - The first integer to be swapped
 * @b - The second integer to be swapped
 * Return: success
 */

void swap_int(int *a, int *b)
/* the fuction that swaps the values of two integers */
{
int temp = *a;
*a = *b;
*b = temp;
}

