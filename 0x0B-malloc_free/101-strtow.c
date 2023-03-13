#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words
 * @str: a sring to be counted
 * return: null
 */

char **strtow(char *str)
{
char **matrix, *tmp;
int i, k = 0, len = 0, word, c = 0, start, end;
while (*(str + len))
len++;
words (str);
if (word == 0)
return (NULL);
matrix = (char **) malloc(sizeof(char *) * (word + 1));
if (matrix == NULL)
return (NULL);
for (i = 0; i <= len; i++)
{
if (str[i] == ' ' || str[i] == '\0')
{
if (c)
{
end = i;
tmp = (char *) malloc(sizeof(char) * (c + 1));
if (tmp == NULL)
return (NULL);
while (start < end)
*tmp++ = str[start++];
*tmp = '\0';
matrix[k] = tmp - c;
k++;
c = 0;
}
}
else if (c++ == 0)
start = i;
}
matrix[k] = NULL;
return (matrix);
}
