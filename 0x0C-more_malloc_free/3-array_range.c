#include <stdlib.h>
#include <stdio.h>
/**
  * _abs - get absolute value
  * @n: number to calculate
  * Return: absolute value of the number
  */
int _abs(int n)
{
	n < 0 ? (n *= -1) : (n = n);
	return (n);
}
/**
  * array_range - creates an array of integers
  * @min: minimum value
  * @max: maximum value
  * Return: pointer to array of integers
  */
int *array_range(int min, int max)
{
	int *p;
	int r, x;

	if (min > max)
		return (NULL);
	r = max - min + 1;
	p = malloc(r * sizeof(*p));
	if (p == NULL)
		return (NULL);
	for (x = 0; x < r; min++, x++)
		p[x] = min;
	return (p);
}
