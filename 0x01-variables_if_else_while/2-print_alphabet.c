#include <stdio.h>

/**
 * main - A program to print the Alphabets in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char low_alpha;
	for (low_alpha = 'a'; low_alpha <= 'z'; low_alpha++)
	{
		putchar(low_alpha);
	}
	putchar('\n');

	return (0);
}
