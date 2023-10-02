#include <stdio.h>
#include "main.h"

/**
 * main - print arguments num and passe to program
 * @argv: array arguments
 * @argc: num of arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);
	return (0);
}
