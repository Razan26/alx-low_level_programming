#include "main.h"
#include <stdlib.h>
/**
 * argstostr - main entry
 * @av: pointry double
 * @ac: input
 * Return: 0;
 */
char *argstostr(int ac, char **av)
{
	int i, n, s = 0, m = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
			m++;
	}
	m += ac;

	str = malloc(sizeof(char) * m + 1);
	if (str == NULL)
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[s] = av[i][n];
			s++;
		}
		if (str[s] == '\0')
		{
			str[s++] = '\n';
		}
	}
	return (str);
}
