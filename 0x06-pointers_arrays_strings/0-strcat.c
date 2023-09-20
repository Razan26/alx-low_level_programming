#include "main.h"
#include <stdio.h>

/**
 * _strcat - chain to string
 * two strings are concatenas
 * @src : Source string
 * @dest: Distination string
 * Return: A pounter to the result string
 */

char *_strcat(char *dest, char *src)

{
	int dlen = 0, r;

	while (dest[dlen])
	{
		dlen++;
	}

	for (r = 0; src[r] != 0; r++)
	{
		dest[dlen] = src[r];
		dlen++;
	}


	dest[dlen] = '\0';
	return (dest);
}
