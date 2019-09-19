#include <stdio.h>
/**
 * main - Accept empty value
 * Return: (0) if is correct
 * Description: Write a program that prints all single digit numbers of
 * base 10 starting from 0, followed by a new line.
 */
int main(void)
{
char ch;
for (ch = 'z' ; ch >= 'a' ; ch--)
putchar(ch);
putchar ('\n');
return (0);
}
