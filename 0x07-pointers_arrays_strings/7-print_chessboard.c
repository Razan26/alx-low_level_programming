#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - point of entry
 * @a: array
 * Return: 0
 */

void print_chessboard(char (*a)[8])
{
	int r, z;

	for (r = 0; r < 8; r++)
	{
		for (z = 0; z < 8; z++)
			putchar(a[r][z]);
		putchar('\n');
	}
}
