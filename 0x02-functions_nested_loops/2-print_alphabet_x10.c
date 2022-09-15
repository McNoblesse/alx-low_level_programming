#include "main.h"
/**
 * print_alphabet_x10 - Entry point
 * A program to print the alphabets in lowercase, 10 times
 *
 * Return: void
 */
void print_alphabet_x10(void)
{
	int i;
	int alph;

	for (i = 0; i <= 9; i++)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
		{
			_putchar(alph);
		}
		_putchar('\n');

	}
}
