#include "main.h"

/**
 * reverse_array - Content of array
 * @a: reversed
 * @n: elements number
 */

void reverse_array(int *a, int n)
{
	int raz, an;

	for (an = n - 1; an >= n / 2; an--)
	{
		raz = a[n - 1 - an];
		a[n - 1 - an] = a[an];
		a[an] = raz;
	}
}
