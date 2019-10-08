#include "holberton.h"

/**
 * _strspn - get length of a prefix substring
 * @s: the string to search
 * @accept: the characters to allow in the substring
 *
 * Description: calculates the length (in bytes) of the initial segment of s
 * which consists entirely of bytes in accept.
 *
 * Return: number of bytes in the initial segment of s which consist only of
 * bytes fron accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	char *x;

	for (i = 0; s[i]; ++i)
	{
		for (x = accept; *x; ++x)
		{
			if (s[i]  == *x)
				break;
		}
		if (!*x)
			break;
	}

	return (i);
}
