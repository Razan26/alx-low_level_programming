#include "main.h"
#include <stdlib.h>
#include <stdio.h>

#define ERR_MSG "Error"

/**
 * is_digit - checkes if a string
 * @s: string to evaluated
 * Return: 0 if not digit 1 otherwise
 */

int is_digit(char *s)
{
	int r = 0;

	while (s[r])
	{
		if (s[r] < '0' || s[r] > '9')
			return (0);
		r++;
	}
	return (1);
}

/**
 * _strlen - return lenght string
 * @s: string evaluated
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int r = 0;

	while (s[r] != '\0')
	{
		r++;
	}
	return (r);
}

/**
 * errors - handles
 */

void errors(void)
{
	printf("Error\n");
	exit(98);
}

/**
 * main - multiplies two num
 * @argc: num of arguments
 * @argv: array of argument
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	char *s1, *s2;
	int len1, len2, len, i, carry, digit1, digit2, *result, a = 0;

	s1 = argv[1], s2 = argv[2];
	if (argc != 3 || !is_digit(s1) || !is_digit(s2))
		errors();
	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len = len1 + len2 + 1;
	result = malloc(sizeof(int) * len);
	if (!result)
		return (1);
	for (i = 0; i <= len1 + len2; i++)
		result[i] = 0;
	for (len1 = len1 - 1; len1 >= 0; len1--)
	{
		digit1 = s1[len1] - '0';
		carry = 0;
		for (len2 = _strlen(s2) - 1; len2 >= 0; len2--)
		{
			digit2 = s2[len2] - '0';
			carry += result[len1 + len2 + 1] + (digit1 * digit2);
			result[len1 + len2 + 1] = carry % 10;
			carry /= 10;
		}
		if (carry > 0)
			result[len1 + len2 + 1] += carry;
	}
	for (i = 0; i < len - 1; i++)
	{
		if (result[i])
			a = 1;
		if (a)
			_putchar(result[i] + '0');
	}
	if (!a)
		_putchar('0');
	_putchar('\n');
	free(result);
	return (0);
}
