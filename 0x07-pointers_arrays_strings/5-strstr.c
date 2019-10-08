  
#include "holberton.h"

/**
 * _strstr - locate a substring
 * @haystack: string to search
 * @needle: substring to search for
 *
 * Description: function that locates a substring.
 *
 * Return: a pointer to the beginning of the located substring, or
 * NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *xsub, *ysub;

	do {
		xsub = haystack;
		ysub = needle;
		do {
			if (!*ysub)
				return (haystack);
			if (!*xsub)
				return (NULL);
		} while (*xsub++ == *ysub++);
	} while (*(++haystack));

	return (NULL);
}
