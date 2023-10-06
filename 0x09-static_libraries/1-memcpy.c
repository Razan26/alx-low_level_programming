#include "main.h"

/**
 * _memcpy - a function
 * @dest: memory stored
 * @src: memory copied
 * @n: byets num
 * Return: n bytes copied
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int s = 0;
	int t = n;

	for (; s < t; s++)
	{
		dest[s] = src[s];
		n--;
	}
	return (dest);
}
