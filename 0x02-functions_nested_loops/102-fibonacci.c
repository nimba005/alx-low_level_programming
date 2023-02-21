#include <stdio.h>

/**
 * main - print the first 52 fibonacci numbers
 * Return: Nothing
 */
int main(void)
{
int q = 0;
long r = 1, s = 2;
while (q < 50)
{
if (q == 0)
printf(", %ld", r);
else if (q == 1)
printf(", %ld", s);
else
{
s += r;
r = s - r;
printf(", %ld", s);
}
++q;
}
printf("\n");
return (0);
}
