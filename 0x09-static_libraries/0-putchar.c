#include <unistd.h>

/**
 * _putchar - write the char to stdout
 * @c: The char to print
 * Return: 1
 * On error, -1 is return
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
