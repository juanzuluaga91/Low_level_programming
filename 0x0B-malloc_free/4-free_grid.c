#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - Entry point
 *@grid: rows of a matrix
 *@height: columns of the string
 * Return: a pointer to a 2 dimensional array of integers or null
 */
void free_grid(int **grid, int height)
{
	int ch;
	int *p;

	for (ch = 0; ch < height; ch++)
	{
		p = grid[ch];
		free(p);
	}
	free(grid);
}
