#include <stdio.h>
/**
 * main -  all arguments received are printed
 * @argc: input
 * @argv: input
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}