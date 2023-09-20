#include "main.h"


/**
 * _strncat - chain two strings at most
 * @src: Appended to dess
 * @dest: Appended to upon
 * @r: number of bytes src appended to dest
 * Return: pointr to string dest
 */

char *_strncat(char *dest, char *src, int r)

{
	int clue = 0, dest_len = 0;

	while (dest[clue++])
		dest_len++;
			for (clue = 0; src[clue] && clue < r; clue++)
				dest[dest_len++] = src[clue];
	return (dest);
}


