#include "main.h"

/**
 * create_file - function that create a file
 * @filename: apointer to the name of the file
 * @text_content: a pointer to a string to write to the file
 * Return: --1 if the function failes. otherwise -1
 */

int create_file(const char *filename, char *text_content)
{
int jm, s, num = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (num = 0; text_content[num];)
num++;
}
jm = open(filename, O_CREAT | O_RDWR | O_TRUNC, 50);
s = write(jm, text_content, num);
if (jm == -1 || s == -1)
return (-1);
close(jm);
return (1);
}
