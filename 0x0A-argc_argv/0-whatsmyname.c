#include <stdio.h>
#include "main.h"
/**
 * main - name ptinting of program
 * @argv: array arguments
 * @argc: numb of arguments
 * Return: 0
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}
