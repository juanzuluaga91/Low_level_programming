#include "holberton.h"
#include <math.h>
#include <stdio.h>

/**
 * print_diagsums - print the diagonal sums of a square matrix
 * @a: pointer to the element at (row 0, column 0)
 * @size: the size of one dimension of the matrix
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int x, *p;
	int s_1 = 0;
	int s_2 = 0;

	for (p = a, x = 0; x < size; ++x, p += size + 1)
		s_1 += *p;

	for (p = a + size - 1, x = 0; x < size; ++x, p += size - 1)
		s_2 += *p;

	printf("%d, %d\n", s_1, s_2);
}
