#include "holberton.h"
/**
*str_long - function that returns lenght of a string
*@s: string
*
*Return: length of a string
*/
int str_long(char *s)
{
	int l = 0;

	if (*s != '\0')
	{
		l++;
		return (str_long(s + 1) + l);
	}
	return (l);
}
/**
 *chker - Function that compares two strings.
 *@i: original number
 *@l: counter to compare multiplication
 *@s: string
 *Return: square root
 */
int chker(int i, int l, char *s)
{
	if (i >= l)
		return (1);
	else if (s[i] == s[l])
		return (chker(i + 1, l - 1, s));
	else
		return (0);
}
/**
 *is_palindrome - return 1 if a string is a palindrome
 *@s: number to evaluate
 *Return: 1 or 0
 */
int is_palindrome(char *s)
{
	int l = str_long(s);
	int i = 0;

	return (chker(i, l - 1, s));
}
