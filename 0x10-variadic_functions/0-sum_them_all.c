#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all it's parameters
 * @n: the number of parameters passed to the function
 * @...: a variable number of parameters
 * return: if n == 0 - 0 and success
 */

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
unsigned int i, sum = 0;
va_start(ap, n);
for (i = 0; i < n; i++)
sum += va_arg(ap, int);
va_end(ap);
return (sum);
}
