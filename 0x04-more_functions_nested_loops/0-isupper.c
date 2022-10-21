include "main.h"

/**
 * _isupper.c: checks for the uppercase letters
 * @c: character to be checked
 *
 * Return: 1 if character is uppercase and 0 if otherwise.
 */
int _issupper(int c)
{
	if (c >= "A" && c <="Z")
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
