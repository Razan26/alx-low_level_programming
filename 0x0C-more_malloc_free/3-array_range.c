#include <stdlib.h>
#include "main.h"

/**
 * *array_range - creates an array
 * @min: minimum range
 * @max: maximum range
 * Return: pointer the new array
 */

int *array_range(int min, int max)
{
	int *ptr;
	int r, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	ptr = malloc(sizeof(int) * size);

	if (ptr == NULL)
		return (NULL);

	for (r = 0; min <= max; r++)
		ptr[r] = min++;

	return (ptr);
}
