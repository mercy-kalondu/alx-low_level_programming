#include "main.h"
/**
 * set_bit - sets a bit of an index to 1
 * @n: pointer to the numbe that will be changed
 * @index: bit  index set to 1
 * Return: 1 for success, -1 othewise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = ((1UL << index) | *n);
return (1);
}
