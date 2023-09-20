#include "main.h"
#include <stdio.h>

/**
 * _strcat - chain to string
 * two strings are concatenas
 * @src : Source string
 * @dest: Distination string
 * Return: A pounter to the result string
 */

char *_strcat(char *src, char *dest)

{
	int chain = 0, r;

	while (dest[chain])
	{
		chain++;
	}
	for (r = 0; src[r] != 0; r++)
	{
		dest[chain] = src[r];
		chain++;
	}
	dest[chain] = '\0';
	return (dest);
}
