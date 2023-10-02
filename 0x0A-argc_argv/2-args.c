#include <stdio.h>
#include "main.h"

/**
 * main - print all arguments
 * @argv: array argument
 * @argc: numb of argument
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int r;

	for (r = 0; r < argc; r++)
	{
		printf("%s\n", argv[r]);
	}
	return (0);
}
