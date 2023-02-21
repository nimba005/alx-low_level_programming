#include "main.h"

/**
 * _abs - computes the absolute value of an integer
 * @j - The number to be computed
 * Return: Absolute value of the number or zero
 */
int _abs(int j)
{
if (j < 0)
{
int abs_val;
abs_val = j * -1;
return (abs_val);
}
return (j);
}
