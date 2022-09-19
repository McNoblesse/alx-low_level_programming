#include "main.h"

/**
 * _strlen - checks the length of a string
 * @s: string to check
 *
 * Return: length of the string len
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len])
		len++;
	return (len);
}
