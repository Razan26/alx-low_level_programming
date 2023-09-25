#include "main.h"

/**
 * _memcpy - Point of entry
 * @src: is input
 * @dest: is input
 * @n: also input
 * Return: 0
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
		dest[r] = src[r];
	return (dest);
}
