#include "main.h"
/**
 * clear_bit - setsbit value to 0
 * @n: points to the number to be changed
 * @index: bit index to be cleared
 * Return: 1 for success, -1 otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);
*n = (~(1UL << index) & *n);
return (1);
}
