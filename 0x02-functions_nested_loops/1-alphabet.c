#include "holberton.h"
/**
 * main - Accept empty value
 * Return: (0) if is correct
 * Description: Write a program that prints the alphabet in
 * lowercase, followed by a new line.
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
_putchar(ch);
_putchar ('\n');
return (0);
}
