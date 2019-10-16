#include <stdlib.h>
/**
 * create_array - creates and initializes an array of chars with char c
 * @size: size of the array
 * @c: char to start the array
 * Return: pointer to the array of chars
 */
char *create_array(unsigned int size, char c)
{
	char *x;
	unsigned int i;

	if (size > 0)
	{
		x = malloc(size * sizeof(char));
		if (x == NULL)
			return (NULL);
	}
	else
		return (NULL);
	for (i = 0; i < size; i++)
		x[i] = c;
	return (x);
}
