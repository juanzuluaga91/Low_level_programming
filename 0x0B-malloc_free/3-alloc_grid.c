#include <stdlib.h>
/**
 * alloc_grid - allocates memory for a 2D array of ints
 *
 * @width: number of    columns
 * @height: number of   rows
 *
 * Return: pointer to a 2D array, NULL on error
 */
int **alloc_grid(int width, int height)
{
	int **array, ch = 0, hc = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	while (ch < height)
	{
		array[ch] = malloc(sizeof(int) * width);
		if (array[ch] == NULL)
		{
			while (ch >= 0)
			{
				ch--;
				free(array[ch]);
			}
			free(array);
			return (NULL);
		}
		ch++;
	}
	for (ch = 0; ch < height; ch++)
		for (hc = 0; hc < width; hc++)
			array[ch][hc] = 0;
	return (array);
}
