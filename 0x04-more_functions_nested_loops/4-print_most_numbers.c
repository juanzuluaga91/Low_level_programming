  
#include "holberton.h"
/**
 * print_most_numbers - print numbers 0..9\n
 *
 * Description: skips 2 & 4
 *
 * Return: always void
 */
void print_most_numbers(void)
{
	int i = '0';

	while (i <= '9')
	{
		if (i == '2' || i == '4')
		{
			i++;
			continue;
		}
		_putchar(i++);
	}
	_putchar('\n');
}
