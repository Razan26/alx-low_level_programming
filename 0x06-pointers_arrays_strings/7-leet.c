#include "main.h"

/**
 * leet - Encode into 1337speak
 * @n: input of value
 * Return : n value
 */
char *leet(char *n)
{
	int r, z;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (r = 0; n[r] != '\0'; r++)
	{
	for (z = 0; z < 10; z++)
	{
		if (n[r] == s1[z])
		{
			n[r] = s2[z];
		}
	}
	}
	return (n);
}
