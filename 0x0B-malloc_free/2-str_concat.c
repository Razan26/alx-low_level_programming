#include "main.h"
#include <stdlib.h>
/**
 * str_concat - get ends of input and add size too
 * @s1: input one
 * @s2: input two
 * Return: s1 and s2
 */

char *str_concat(char *s1, char *s2)
{
	char *conct;
	int r, rz;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	r = rz = 0;
	while (s1[r] != '\0')
		r++;
	while (s2[rz] != '\0')
		rz++;
	conct = malloc(sizeof(char) * (r + rz + 1));

	if (conct == NULL)
		return (NULL);
	r = rz = 0;
	while (s1[r] != '\0')
	{
		conct[r] = s1[r];
		r++;
	}

	while (s2[rz] != '\0')
	{
		conct[r] = s2[rz];
		r++, rz++;
	}

	conct[r] = '\0';
	return (conct);
}
