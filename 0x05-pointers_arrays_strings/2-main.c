#include "main.h"
#include <string.h>
#include <stdio.h>



/**
 * main - check the code
 *
 *
 *
 * Return: Always 0.
 *
 */

int main(void)

{
	char *x = "Hello world";
	char *s = &x;

	int len;

	for (; *s != '\0'; s++)

	{
		len += 1;
		s++;
	}
	printf("%d\n", strlen(x));
	printf("Learn Programming Africa\n")

		return (0);
}
