#include <stdio.h>
#include "main.h"

/**
 * _strstr - Point of entry
 * @needle: is iput
 * @haystack: input
 * Return: 0
 */

char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *first = haystack;
		char *sec = needle;

		while (*first == *sec && *sec != '\0')
		{
			first++;
			sec++;
		}

		if (*sec == '\0')
			return (haystack);
	}
	return (NULL);
}
