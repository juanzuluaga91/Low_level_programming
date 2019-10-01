#include "holberton.h"
/**
 * swap_int - Swap integer between them.
 *
 * @a: integer to point out
 * @b: integer to point out
 *
 * Return: Sit a pointer to n variable
 */
void swap_int(int *a, int *b)
{
int ch;
ch = *a;
*a = 42;
*b = ch;
}
