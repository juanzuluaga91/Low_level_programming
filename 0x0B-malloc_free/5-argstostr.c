#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "holberton.h"


/**
 * _strlen - returns the length of a given string
 *
 *
 * @s: string to check the length of
 * Return: returns the length of the string
 */
int _strlen(char *s)
{
	int ch;

	ch = 0;
	while (s[ch] != '\0')
		ch++;
	return (ch);
}

/**
 * _strcat - concat strings, src appended to dest
 *
 * @dest: destination string
 * @src: source string
 * Return: returns finished string
 */
char *_strcat(char *dest, char *src)
{
	int ch, hc;

	ch = hc = 0;
	while (dest[ch] != '\0')
		ch++;
	while (src[hc] != '\0')
		dest[ch++] = src[hc++];
	dest[ch] = '\0';
	return (dest);
}

/**
 * argstostr - concats together program arguments into one string
 *
 *
 * @ac: argument count
 * @av: arguments
 * Return: returns pointer to completed string
 */
char *argstostr(int ac, char **av)
{
	char *string;
	int length, x;

	if (ac == 0 || av == NULL)
		return (NULL);
	length = 1;
	x = 0;
	while (x < ac)
	{
		length += _strlen(av[x]) + 1;
		x++;
	}
	string = malloc(length * sizeof(char));
	if (string == NULL)
		return (NULL);
	x = 0;
	while (x < ac)
	{
		_strcat(string, av[x++]);
		_strcat(string, "\n");
	}
	if (!string)
		return (NULL);
	return (string);
}
