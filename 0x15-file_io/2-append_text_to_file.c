#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: A pointer to the name of the file
 * text_content: the string to add to the end of the file
 * Return: --1 if NUll otherwise -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
int f, d, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
f = open(filename, O_WRONLY | O_APPEND);
d = write(f, text_content, len);
if (f == -1 || d == -1)
return (-1);
close(f);
return (1);
}
