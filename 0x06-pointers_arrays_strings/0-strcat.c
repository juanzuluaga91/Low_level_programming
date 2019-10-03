#include "holberton.h"
#include <stdio.h>
/**
 *_strcat - concatenates two strings.
 *@dest: Destination
 *@src: Source
 *Return: pointer to the resulting string.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j;

	while (*(dest + i))
		i++;
	j = i;

	for (; *(src + (i - j)); i++)
		*(dest + i) = *(src + (i - j));
	*(dest + i) = '\0';
	return (dest);
}
