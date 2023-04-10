#include "main.h"
/**
 * binary_to_uint -binary to unsigned int
 * @b: string with the binary number
 *
 * Return: the converted number or NULL otherwise
 */
unsigned int binary_to_uint(const char *b)
{
int a;
unsigned int dec_val = 0;
if (!b)
return (0);
for (a = 0; b[i]; a++)
{
if (b[i] < '0' || b[i] > '1')
return (0);
dec_val = 2 * dec_val + (b[i] - '0');
}
return (dec_val);
}
