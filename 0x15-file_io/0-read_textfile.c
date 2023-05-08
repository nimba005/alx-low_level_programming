#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - read text file and print to STDOUT
 * @filename: text file being read
 * @letters: The number of letters to be read
 * Return: w(The number of bytes read and printed) or 0 if NULL
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t fd;
ssize_t d;
ssize_t e;
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buf = malloc(sizeof(char) * letters);
e = read(fd, buf, letters);
d = write(STDOUT_FILENO, buf, e);
free(buf);
close(fd);
return (d);
}
