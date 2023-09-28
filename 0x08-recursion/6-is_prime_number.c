#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - Return if a numb is prime
 * @n: checked
 * Return: integer value
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}


/**
 * check_prime - numb is prime
 * @n: the numb to check
 * @r: iteration times
 * Return: 1 prime 0 composite
 */
int check_prime(int n, int r)
{
	if (n <= 1)
		return (0);

	if (n % r == 0 && r > 1)
		return (0);

	if ((n / r) < r)
		return (1);

	return (check_prime(n, r + 1));
}
