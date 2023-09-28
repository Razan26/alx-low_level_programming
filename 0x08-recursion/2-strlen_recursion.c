#include "main.h"

/**
 * _strlen_recursion - lenght calculation
 * @s: cout  string
 * Return: int valu
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
