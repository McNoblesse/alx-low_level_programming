#include <stdio.h>

/**
 * main - A program to print the Alphabets in lowercase
 * and exclude q and e.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low_alpha;
	char e = 'e';
	char q = 'q';

	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		if (low_alpha != e && low_alpha != q)
		putchar(low_alpha);
	}
	putchar('\n');

	return (0);
}
