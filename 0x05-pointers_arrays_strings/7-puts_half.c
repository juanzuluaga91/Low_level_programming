#include "holberton.h"
/**
 * puts_half - Print half o a string
 * @str: string of formula
 */
void puts_half(char *str)
{
int i;
for (i = 5 ; str[i] != '\0'; i++)
{
_putchar(str[i]);
}
_putchar('\n');
}
