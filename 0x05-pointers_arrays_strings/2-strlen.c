#include "main.h"
#include <string.h>

/**
 * _strlen -  returns the length of a string.
 * @s: string pointer
 * Return: length of string.
 */
int _strlen(char *s)
{
	int len;

	for ( ; *s != '\0'; s++)
	{
		len += 1;
	}

	return (strlen(s));
}
