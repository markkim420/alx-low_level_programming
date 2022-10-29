#include "main.h"
#include <stdio.h>

/**
 * string_toupper - changes lowercase letters of a string to uppercase.
 * @n: pointer
 * @'a': lower case parameter
 * @'z': lowercase parameter
 * Return: char
 *
 */
char *string_toupper(char *n)
{
	int x;

	x = 0;
	while (n[x] != '\0')
	{
		if (n[x] >= 'a' && n[x] <= 'z')
			n[x] = n[x] - 32;
		x++;
	}
	return (n);
}
