#include "holberton.h"
/**
 * _strlen - size a variable
 *
 * @s: integer to be measured
 *
 * Return: Sit a pointer to n variable
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}
