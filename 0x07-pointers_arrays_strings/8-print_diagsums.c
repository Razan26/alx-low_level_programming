#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Point of entry
 * @a: is input
 * @size: also input
 * Return: 0
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2, f;

	sum1 = 0;
	sum2 = 0;

	for (f = 0; f < size; f++)
	{
		sum1 = sum1 + a[f * size + f];
	}

	for (f = size - 1; f >= 0; f--)
	{
		sum2 += a[f * size + (size - f - 1)];
	}
	printf("%d, %d\n", sum1, sum2);
}
