#include <stdio.h>
#include "main.h"

/**
 * _putchar - character writes c to stdout
 * @c: print character
 * Return: Success 1.
 * error, -1 return errno
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
