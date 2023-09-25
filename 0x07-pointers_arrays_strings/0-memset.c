#include "main.h"

/**
 * _memset - Point of entrt
 * @b: The constant
 * @s: Distination
 * @n: bytes
 * Return: 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int r;

	for (r = 0; r < n; r++)
		s[r] = b;
	return (s);
}
