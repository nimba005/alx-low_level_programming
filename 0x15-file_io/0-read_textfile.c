#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the posix STDOUT
 * @filename: name of the file to be read
 * @letters: maximum number of letters to be read and printed
 * Return: number of letters it could read and write else 0 if file name is NULL
 *         if write fail return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int fd, length, y, result;
char *buffer;

/* check if the parameter is NULL */
if (filename == NULL)
return (0);

/* open the file in read only mode */
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);

/* allocate a buffer of size letters */
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);

/* read and add a null terminator */
read(fd, buffer, letters);
buffer[letters] = '\0';
for (y = 0; buffer[y] != '\0'; y++)
length += 1;
result = close(fd);
if (result != 0)
exit(-1);

/* write contents of buffer to STDOUT */
result = write(STDOUT_FILENO, buffer, length);
if (result != length)
return (0);
free(buffer);
return (length);
}
