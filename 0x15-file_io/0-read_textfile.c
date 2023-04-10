#include "main.h"
/**
 * read_textfile- Reads a texxfile and prints to STDOUT
 * @filename: text file that will be read
 * @letters: How many letter will be read
 * Return: r- exact  number of bytes read and printed and 0 otherwise
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
char *buf;
ssize_t av;
ssize_t r;
ssize_t t;
av = open(filename, O_RDONLY);
if (av == -1)
return (0);
buf = malloc(sizeof(char) * letters);
t = read(av, buf, letters);
r = write(STDOUT_FILENO, buf, t);
free(buf);
close(av);
return (r);
}
