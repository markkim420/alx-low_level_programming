#include <stdio.h>
/**
 * main - print out sizes of data types in c
 * code by markkim420
 * Return: 0
*/
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("size of a char: %d byte(s)\n", (unsigned long)sizeof(a));
	printf("size of an int: %d byte(s)\n", (unsigned long)sizeof(b));
	printf("size of a long int: %d byte(s)\n", (unsigned long)sizeof(c));
	printf("size of a long long int: %d byte(s)\n", (unsigned long)sizeof(d));
	printf("size of a float: %d byte(s)\n", (unsigned long)sizeof(e));
	return (0);
}
