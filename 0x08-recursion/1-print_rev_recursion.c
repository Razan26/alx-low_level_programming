#include "main.h"
/**
 * _print_rev_recursion - reverse
 * @s:rev string
 * Return: non
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	s++;
	_print_rev_recursion(s);
	s--;
	_putchar(*s);
}


