#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - Point of entry
 * @accept: is input
 * @s: also input
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int r, z;


	for (r = 0; s[r] != '\0'; r++)
	{
		for (z = 0; accept[z] != '\0'; z++)
		{
			if (s[r] == accept[z])
				return (s + r);
		}
	}
	return (NULL);
}
