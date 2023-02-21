#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always 0.
 */
int main(void)
{
int count;
unsigned long fib1 = 0, fi2 = 1, sum;
unsigned long fib1_half1, fib1_half2, fib2_half1, fib2_half2;
unsigned long half1, half2;
for (count = 0; count < 92; count++)
{
sum = fib1 + fib2;
printf("%lu, ", sum);
fib1 = fib2;
fib2 =  sum;
}
}
