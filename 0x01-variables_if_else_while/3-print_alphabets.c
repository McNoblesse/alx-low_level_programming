#include <stdio.h>

/**
 * main - A program to print
 * The alphabet in lowercase, then in uppercase
 *
 * Return: Always 0 (Succes)
 */
int main(void)
{
	char alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		putchar(alph);
	}
	for (alph = 'A'; alph <= 'Z'; alph++)
	{
		putchar(alph);
	}
	putchar('\n');

	return (0);
}
