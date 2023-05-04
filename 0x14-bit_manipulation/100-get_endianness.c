#include "main.h"

/**
 * get_endianness - checks the endianness
 * Return: 0 for big endian and 1 for little endian
 */
int get_endianness(void)
{
unsigned int s = 1;
char *m = (char *) &s;
return (*m);
}
