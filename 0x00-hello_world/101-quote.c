#include <stdio.h>
/**
 * main - a fundtion that does not use printf or puts but uses write
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 61);
	return (1);
}
