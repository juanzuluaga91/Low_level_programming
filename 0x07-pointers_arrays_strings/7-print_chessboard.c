#include "holberton.h"

/**
 * print_chessboard - print the chessboard
 * @a: pointer to an the chess board represented as an 8x8 array
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	int y, x;

	for (y = 0; y < 8; ++y)
	{
		for (x = 0; x < 8; ++x)
			_putchar(a[y][x]);
		_putchar('\n');
	}
}
