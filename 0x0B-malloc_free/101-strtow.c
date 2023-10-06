#include <stdlib.h>
#include "main.h"

/**
 * count_word - count numbers of words
 * @s: strint to evalu
 * Return: num of words
 */
int count_word(char *s)
{
	int flag, f, k;

	flag = 0;
	k = 0;

	for (f = 0; s[f] != '\0'; f++)
	{
		if (s[f] == ' ')
			flag = 0;
		else if (flag == 0)
		{
			flag = 1;
			k++;
		}
	}

	return (k);
}
/**
 * **strtow - splits a string into eords
 * @str: split
 * Return: success or NULL
 */
char **strtow(char *str)
{
	char **matrix, *tmp;
	int r, s = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = count_word(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);
	for (r = 0; r <= len; r++)
	{
		if (str[r] == ' ' || str[r] == '\0')
		{
			if (c)
			{
				end = r;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[s] = tmp - c;
				s++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = r;
	}

	matrix[s] = NULL;
	return (matrix);
}
