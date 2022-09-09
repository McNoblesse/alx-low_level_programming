#include <stdio.h>
/**
 * Main - Entry Point
 *
 * Return: Always 0 (Success)
 */
int main(void) /* Entry Point*/
{
	char d;
	int a;
	long int b;
	long long int c;
	float f;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(d));
	printf("Size of int: %lu byte(s)\n", (unsigned long)sizeof(a));
	printf("Size of long int: %lu byte(s)\n", (unsigned long)sizeof(b));
	printf("Size of long long int: %lu byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of float: %lu byte(s)\n", (unsigned long)sizeof(f));
	return (0);
}
