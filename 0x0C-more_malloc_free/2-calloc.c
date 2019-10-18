#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_calloc - function to allocates memory
 * @nmemb: unsigned int type
 * @size: unsigned int type
 * Return: return pointer to array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int x;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
	{
		return (NULL);
	}
	x = 0;
	while (x < nmemb * size)
	{
		p[x] = 0;
		x++;
	}
	return (p);
}
