#include "holberton.h"

/**
 *_strcmp - compares two strings.
 *@s1: string one
 *@s2: string two
 *Return: int if zero s1 = s2, if neg s1 < s2 and if pos s2 < s1
 */

int _strcmp(char *s1, char *s2)
{
	int x1 = 0;
	int z = 0;

	while (z == 0 && (*(s1 + x1) || *(s2 + x1)))
	{
		z = *(s1 + x1) - *(s2 + x1);
		x1++;
	}
	return (z);
}
