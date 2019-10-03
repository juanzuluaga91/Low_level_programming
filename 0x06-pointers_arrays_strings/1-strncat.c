#include "holberton.h"
#include <stdio.h>
/**
 *_strncat - concatenates two strings.
 *@dest: string destination
 *@src: string to be appended to dest.
 *@n: it will use at most n bytes from src.
 *Return: pointer to the resulting string.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j;

	while (*(dest + i))
		i++;
	j = i;

	for (; (i - j) <= (n - 1); i++)
	{
		if (*(src + (i - j)))
			*(dest + i) = *(src + (i - j));
		else
			break;
	}
	*(dest + i) = '\0';
	return (dest);
}
