#include "main.h"
#include <string.h>

/**
 * create_file - creates a file
 * @filename: name of file to create
 * @text_content: pointer to the string we want to create
 * Return: 1 on sucess | -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
int fd, res, len;
if (filename == NULL)
return (-1);
fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
if (fd == -1)
return (1);
if (text_content == NULL)
return (1);
len = strlen(text_content);
res = write(fd, text_content, len);
if (res != len)
return (-1);
res = close(fd);
return (1);
}
