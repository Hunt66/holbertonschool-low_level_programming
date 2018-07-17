#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>


/**
 *alloc_grid - makes a 2D array of ints and returns it
 *@width: the width of the 2d array
 *@height: the height of the 2d array
 *Return: 2d array
 */


int **alloc_grid(int width, int height)
{
	int i, j;
	int **out = (int **)malloc(height * sizeof(int *));

	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	if (width <= 0 || height <= 0)
		return (NULL);
	for (i = 0 ; i < height ; i++)
	{
		out[i] = (int *)malloc(width * sizeof(int));
		if (out[i] == NULL)
		{
			for (i = i - 1; i >= -1 ; i--)
			{
				free(out[i]);
			}
			return (NULL);
		}
		for (j = 0 ; j < width ; j++)
		{
			out[i][j] = 0;
		}
	}
	return (out);
}
