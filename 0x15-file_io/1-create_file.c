#include "main.h"
/**
 * create_file -Used to Create a file
 * @filename:Points to the name of the file that is created
 * @text_content:Points to the string that writes on the file
 * Return: If the function fails  -1, otherwise 1
 */
int create_file(const char *filename, char *text_content)
{
int av;
int r;
int len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
av = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
r = write(av, text_content, len);
if (av == -1 || r == -1)
return (-1);
close(av);
return (1);
}
