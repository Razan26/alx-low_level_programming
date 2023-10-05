#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid -grid nesred loop
 * @width: input width
 * @height: height
 * Return: 2 dim arrat
 */
int **alloc_grid(int width, int height)
{
	int **yoo;
	int h, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	yoo = malloc(sizeof(int *) * height);

	if (yoo == NULL)
		return (NULL);
	for (h = 0; h < height; h++)
	{
		yoo[h] = malloc(sizeof(int) * width);

		if (yoo[h] == NULL)
		{
			for (; h >= 0; h--)
				free(yoo[h]);

			free(yoo);
			return (NULL);
		}
	}

	for (h = 0; h < height; h++)
	{
		for (i = 0; i <  width; i++)
			yoo[h][i] = 0;
	}

	return (yoo);
}
