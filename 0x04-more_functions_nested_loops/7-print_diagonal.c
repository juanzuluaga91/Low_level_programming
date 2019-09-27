#include "holberton.h"
/**
 * print_diagonal - prints a diagonal line n long
 *
 * @n: length of line
 *
 * Return: always void
 */
void print_diagonal(int n)
{
	int i, vari;

	i = 0;
	while (n > 0 && i < n)
	{
		vari = 0;
		while (vari < i)
		{
			_putchar(' ');
			vari++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
	if (n < 1)
		_putchar('\n');
}
