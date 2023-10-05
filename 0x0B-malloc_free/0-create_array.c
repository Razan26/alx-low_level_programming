#include "main.h"
#include <stdlib.h>

/**
 * create_array - Create array of size
 * @size: array's size
 * @c: assign
 * Return: pointer . Null if fall
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int r;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (r = 0; r < size; r++)
		str[r] = c;
	return (str);
}
