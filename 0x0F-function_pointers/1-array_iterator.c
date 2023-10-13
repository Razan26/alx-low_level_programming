#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints array
 * @array: array
 * @size: space
 * @action: printer
 * Return: void
 */

void array_iterator(int *array, size_t size, void(*action)(int))
{
	unsigned int r;

	if (array == NULL || action == NULL)
		return;

	for (r = 0; r < size; r++)
	{
		action(array[r]);
	}
}
