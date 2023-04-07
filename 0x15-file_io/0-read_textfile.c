#include "main.h"
#include <stdlib.h>

/**
 * read_textfiles - wites a function that reads a text file and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of bytes  and 0 or NULL if function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
char *num;
ssize_t jm;
ssize_t s;
ssize_t m;

jm = open(filename, O_RDONLY);
if (jm == -1)
return (0);
num = malloc(sizeof(char) * letters);
m = read(jm, num, letters);
s = write(STDOUT_FILENO, num, m);
free(num);
close(jm);
return (s);
}
