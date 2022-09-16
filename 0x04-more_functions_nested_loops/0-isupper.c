#include "main.h"

/**
 * _isupper - checks is a character is uppercase
 * @c: input integer
 * Return: 1 if true, and 0 if false
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);

	else
		return (0);
}
