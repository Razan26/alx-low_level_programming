#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"

/**
 * main - result printing
 * @argc: arg num
 * @argv: array num
 * Return: 0
 */

int main(int__attribute__((__unused__)) argc, char *argv[])
{
	int v1, v2;
	char *op;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	v1 = atoi(argv[1]);
	op = argv[2];
	v2 = atoi(argv[3]);

	if (get_op_func(op) == NULL || op[1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	if ((*op == '/' && v2 == 0) || (*op == '%' && v2 == 0))
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(v1, v2));

	return (0);
}
