#include "main.h"

/**
 * _isalpha - alphabetic char
 * @c: the char to check
 * Return: 1 or 0
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
