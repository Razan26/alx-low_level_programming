#include "function_pointers.h"

/**
 * int_index - index return true
 * @array: array
 * @size: size in the array
 * @cmp: pointer in func
 * Return: 0
 */

int int_index(int *array, int size, int(*cmp)(int))
{
	int r;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (r = 0; r < size; r++)
	{
		if (cmp(array[r]))
			return (r);
	}
	return (-1);
}
