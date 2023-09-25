#include "main.h"

/**
 * _strspn - Point of entry
 * @accept: input
 * @s: also is input
 * Return: 0
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int r = 0;
	int z;

	while (*s)
	{
		for (z = 0; accept[z]; z++)
		{
			if (*s == accept[z])
			{
				r++;
				break;
			}
			else if (accept[z + 1] == '\0')
				return (r);
		}
		s++;
	}
	return (r);
}
