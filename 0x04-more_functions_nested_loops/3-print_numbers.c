#include "holberton.h"
/**
 * print_numbers - print numbers 0..9\n
 *
 * Return: always void
 */
void print_numbers(void)
{
	int i = 48;

	while (i <= 57)
	{
		_putchar(i++);
	}
	_putchar('\n');
}
