#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int av);
/**
 * create_buffer - 1024 bytes are allocated to buffer.
 * @file: name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
char *buffer;
buffer = malloc(sizeof(char) * 1024);
if (buffer == NULL)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", file);
exit(99);
}
return (buffer);
}
/**
 * close_file - file descriptors are closed
 * @av: The file descriptor to be closed.
 */
void close_file(int av)
{
int b;
b = close(av);
if (b == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close av %d\n", av);
exit(100);
}
}
/**
 * main - contents of a file are copied to another file
 * @argc: arguments number
 * @argv: An array of pointers assigned to the arguments.
 * Return: 0 on success.
 * Description:argument count incorrect - 97.
 *              file_f does not exist or  read - 98.
 *              file_t not created or written - 99.
 *              file_t or file_f not  closed - 100.
 */
int main(int argc, char *argv[])
{
int f;
int t;
int r;
int w;
char *buffer;
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_f file_t\n");
exit(97);
}
buffer = create_buffer(argv[2]);
f = open(argv[1], O_RDONLY);
r = read(f, buffer, 1024);
t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
do {
if (f == -1 || r == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't read from file %s\n", argv[1]);
free(buffer);
exit(98);
}
w = write(t, buffer, r);
if (t == -1 || w == -1)
{
dprintf(STDERR_FILENO,
"Error: Can't write to %s\n", argv[2]);
free(buffer);
exit(99);
}
r = read(f, buffer, 1024);
t = open(argv[2], O_WRONLY | O_APPEND);
} while (r > 0);
free(buffer);
close_file(f);
close_file(t);
return (0);
}
