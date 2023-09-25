#include "main.h"

/**
 * _strspn - Point of entry
 * @accept: input
 * @s: also is input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r, z, worth, check;

	worth = 0;

	for (r = 0; s[r] != '\0'; r++)
	{
		check = 0;

		for (z = 0; accept[z] != '\0'; z++)
		{
		if (accept[z] == s[r])
		{
			worth++;
			check = 1;
		}
		}
		if (check == 0)
	}

	return (0);
}
