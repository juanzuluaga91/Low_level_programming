#include "holberton.h"

/**
 * puts2 - Prints out every other char of the string.
 * @str: input string to print.
 */

void puts2(char *str)
{
	int ch;

	while (str[ch] != '\0')
	{
		if (ch % 2 == 0)
			_putchar(str[ch]);
		ch++;
	}
	_putchar('\n');
}
