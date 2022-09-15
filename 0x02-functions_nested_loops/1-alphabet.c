#include "main.h"
/**
 * print_alphabet - Entry point
 * A program to print the alphabets in lowercase
 *
 * Return: void
 */
void print_alphabet(void)
{
	int alph;

	for (alph = 'a'; alph <= 'z'; alph++)
	{
		_putchar(alph);
	}
	_putchar('\n');
}
