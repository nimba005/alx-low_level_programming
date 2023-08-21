#include "main.h"

/**
 * _strstr - seraching for word in a sentence
 * @haystack: sentence
 * @needle: word
 * Return: always 0 (success)
 */
char *_strstr(char *haystack, char *needle)
{
for (; *haystack != '\0'; haystack++)
{
char *h = haystack;
char *n = needle;
while (*h == *n && *n != '\0')
{
h++;
n++;
}
if (*n == '\0')
return (haystack);
}
return (0);
}
