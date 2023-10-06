#include "main.h"
/**
 * _memset - file block
 * @s: straining address
 * @b: desired value
 * @n: number of bytes
 * Return: chancged array with new value
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
