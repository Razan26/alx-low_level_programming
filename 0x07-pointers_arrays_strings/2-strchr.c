#include <stdio.h>
#include "main.h"

/**
 * _strchr - Point of entry
 * @c: is input
 * @s: is also input
 * Return: 0
 */

char *_strchr(char *s, char c)
{
	int r;

	for (r = 0; s[r] >= '\0'; r++)
	{
		if (s[r] == c)
			return (s + r);
	}
	return (NULL);
}
