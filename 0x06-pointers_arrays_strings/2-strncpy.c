#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * Return: success
 */

int main(void)
{
char sl(98);
char *ptr;
int i;
for (i = 0; i < 98 - 1; i++)
{
sl[i] = '*';
}
sl[i] = '\0';
printf("%s\n", sl);
ptr = _strncpy(sl, "First solve the problem, then write the code\n", 5);
printf("%s\n", sl);
printf("%s\n", ptr);
ptr = _strncpy( sl, "First solve the problem, then write the code\n", 90);
printf("%s", sl);
printf("%s", ptr);
for (i = 0; i < 98; i++)
{
if (i % 10)
{
printf(" ");
}
if (!(i % 10) && i)
{
printf("\n");
}
printf("0x%02x", sl[i]);
}
printf("\n");
return (0);
}
