#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: pointer to the name of the file
 * @text_content: the string to add to the end of the file
 * Return: 1, otherwise -1 if fails
 */
 int append_text_to_file(const char *filename, char *text_content)
{
int s, m, num = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (num = 0; text_content[num];)
num++;
}
m = open(filename, O_WRONLY | O_APPEND);
s = write(m, text_content, num);
if (m == -1 || s == -1)
return (-1);
close(m);
return (1);
}
