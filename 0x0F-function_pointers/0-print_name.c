#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - print name
 * @name: string add
 * @f: pointer to function
 * Return: non
 */

void print_name(char *name, void(*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
