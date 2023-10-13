#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - Returns the sum
 * @a: 1st num
 * @b: 2nd num
 * Return: sum
 */


int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - Returns the difference of two numbers.
 * @a: 1st
 * @b: 2nd num
 * Return: difference
 */


int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - Returns the product of two numbers.
 * @a: 1st num
 * @b: 2nd num
 * Return: product
 */


int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - Returns division
 * @a: 1st num
 * @b: 2nd num
 * Return: quotient
 */


int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - Returns the remainder
 * @a: 1st number
 * @b: 2nd number
 * Return: remainder
 */


int op_mod(int a, int b)
{
	return (a % b);
}
