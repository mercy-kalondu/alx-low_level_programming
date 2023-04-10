#include "main.h"
/**
 * append_text_to_file -used to Append text at the end of a file.
 * @filename: points to the name of the file.
 * @text_content: The string added at the end of the file.
 * Return:-1, If the function fails or filename is NULL
 *        -1, If the file does not exist the user has no write permissionons
 *        otherwise 1
 *
 */
int append_text_to_file(const char *filename, char *text_content)
{
int a;
int r;
int len = 0;
if (filename == NULL)
return (-1);
if (text_content != NULL)
{
for (len = 0; text_content[len];)
len++;
}
a = open(filename, O_WRONLY | O_APPEND);
r = write(o, text_content, len);
if (a == -1 || r == -1)
return (-1);
close(a);
return (1);
}
