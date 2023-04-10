#include "main.h"
/**
 * get_bit - returns the value of a bit as a decimal at  an index
 * @n: number to searches
 * @index:bit index
 * Return: value of the bit or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
int val_bit;
if (index > 63)
return (-1);
val_bit = (n >> index) & 1;
return (val_bit);
}
