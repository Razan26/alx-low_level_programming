#include "main.h"

/**
 * _strcmp - Comparesion
 * @s1: first string pointre
 * @s2: sec string pointer
 * Return: *s1 or  *s2
 */

int _strcmp(char *s1, char *s2)

{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
