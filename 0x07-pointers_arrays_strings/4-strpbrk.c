#include "holberton.h"

/**
 * _strpbrk - search a string for any of a set of bytes
 * @s: the string to search
 * @accept: the byte(s) to match
 *
 * Return: pointer to the byte in s that matches  one  of  the  bytes  in
 * accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
	char *x;

	for ( ; *s; ++s)
	{
		for (x = accept; *x; ++x)
		{
			if (*s == *x)
				return (s);
		}
	}
	return (NULL);
}
