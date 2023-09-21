#include "main.h"
/**
 * string_toupper - lowercase
 * @str: changed string
 * Return: changed pointer string
 *
 */

char *string_toupper(char *str)
{

	int chain = 0;

	while (str[chain])
	{
		if (str[chain] >= 'a' && str[chain] <= 'z')
			str[chain] -= 32;
		chain++;
	}
	return (str);
}
