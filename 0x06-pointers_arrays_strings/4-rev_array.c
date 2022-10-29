#include "main.h"

/**
 * reverse_array- function that reverses the content of an array of integers
 * @a: array
 * @n: number of integers
 *
 * Return: reverse
 */
void reverse_array(int *a, int n)
{
	int x;
	int y;

	for (x = 0; x < n; x++)
	{
		n--;
		y = a[x];
		a[x] = a[n];
		a[n] = y;
	}
}
