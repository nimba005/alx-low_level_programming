#include <stdio.h>
/**
 * main - A program that print a size of various computer types
 * return: 0
 */

int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

printf("sizenof char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("size of int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("size of long int: %lu byte(s)\n", (unsigned long int)sizeof(c));
printf("size of long long int: %lu byte(s)\n", (unsigned long long int)sizeof(d));
printf("size of float: %lu byte(s)\n", (unsigned float)sizeof(e));
return (0)
}
