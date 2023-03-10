#include "main.h"
/**
 * _strncat - concatenate two strings
 * using at most n bytes from src
 * @dest: input value
 * @src: input value
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
int i, co;

for (i = 0; dest[i] != '\0'; i++)
{
}

for (co = 0; co < n; co++)
{
dest[i + co] = src[co];
if (src[co] == '\0')
co = n;
}
return (dest);
}
