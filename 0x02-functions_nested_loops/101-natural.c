#include <stdio.h>

/**
 * main - print the sum of all multiples of 3 or 5 upto 1024
 * Return: Always (success)
 */
int main(void)
{
int m, n = 0;
while (m < 1024)
{
if ((m % 3 == 0) || (m % 5 == 0))
{
n += m;
}
m++;
}
printf("%d\n", n);
return (0);
}

