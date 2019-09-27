#include "holberton.h"
/**
 * print_triangle - prints a triangle
 *
 * @tri: size x size right triangle
 *
 * Return: always void
 */
void print_triangle(int tri)
{
	int i, n, tri;

	if (tri < 1)
	{
		_putchar('\n');
		return;
	}
	i = 0;
	tri = tri - 1;
	while (i < tri)
	{
		n = 0;
		while (n < tri)
			_putchar((n++ < tri) ? ' ' : '#');
		_putchar('\n');
		tri--;
		i++;
	}
}
