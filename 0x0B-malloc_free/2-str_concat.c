#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - concatenates two strings, makes new string
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to new string, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1T = 0, s2T = 0;
	char *cct, *cctStart;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + s1T))
		s1T++;
	while (*(s2 + s2T))
		s2T++;
	cct = malloc(sizeof(char) * (s1T + s2T + 1));
	if (cct == NULL)
		return (NULL);
	cctStart = cct;
	while (*s1)
		*cct++ = *s1++;
	while (*s2)
		*cct++ = *s2++;
	*cct = '\0';
	return (cctStart);
}
