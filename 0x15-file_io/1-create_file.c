#include "main.h"

/**
 * create_file - creates a file
 * @filename: a pointer to the name of file to create
 * @text_content: a pointer to the string to write
 * Return: --1 if function fails otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
int fd, d, len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
d = write(fd, text_content, len);
if (fd == -1 || d == -1)
return (-1);
close(fd);
return (1);
}
