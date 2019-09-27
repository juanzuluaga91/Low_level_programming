#include "holberton.h"
/**
 * print_square - prints an nxn square
 *
 * @sqr: length & width of square
 *
 * Return: always void
 */
void print_square(int sqr)
{
	int i, n;

	i = 0;
	while (sqr > 0 && i < sqr)
	{
		n = 0;
		while (n < sqr)
		{
			_putchar('#');
			n++;
		}
		_putchar('\n');
		i++;
	}
	if (sqr <= 0)
		_putchar('\n');
}
