#include "main.h"

/**
 * _strncpy - copy inputted number
 * @src: source string
 * @dest: buffer storing the copy
 * @r: maximum number to copied
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int r)

{
	int clue = 0, src_len = 0;

	while (src[clue++])
		src_len++;
	for (clue = 0; src[clue] && clue < r; clue++)
		dest[clue] = src[clue];
	for (clue = src_len; clue < r; clue++)
		dest[clue] = '\0';
	return (dest);
}
