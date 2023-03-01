#include "main.h"

/**
 * cap_string - capitalize all letters in a string
 * @str: the string to be capitalized
 * return: Success
 */

char *cap_string(char *str)
{
int index = 0;
while (str[index])
{
while(!(str[index] >= 'A' && str[index] <= 'Z'))
index++;
if (str[index - 1] == ' ' || 
str[index - 1] == '\t' ||
str[index - 1] == '\n' ||
str[index - 1] == ',' ||
str[index - 1] == ';' ||
str[index - 1] == '.' ||
str[index - 1] == '!' ||
str[index - 1] == '?' ||
str[index - 1] == '"' ||
str[index - 1] == '(' ||
str[index - 1] == ')' ||
str[index - 1] == '{' ||
str[index - 1] == '}' ||
index == 0)
str[index] -= 32;
index++;
}
return (str);
}
