#include <stdio.h>

/**
 * * main - prints the largest of 3 integers
 * * Return: 0
 * */

int main(void)
{
	int a, b, c;
	int largest;

	a = 972;
	b = -98;
	c = 0;

	if (a > b && a > c)
	{
		printf("a is the largest\n,");
	}
	else if (b > a && b > c)
		{
			printf("b is the largest\n,");
		}
		else
		{
			printf("c is the largest\n,");
		}
	
		return (0);
}
