#include <stdio.h>
/**
 * main - Accept empty value
 * Return: (0) if is correct
 * Description: Write a program that prints all single digit numbers of
 * base 10 starting from 0, without using char variable,
 * followed by a new line.
 */
int main(void)
{
int ch;
for (ch = '0' ; ch <= '9' ; ch++)
putchar(ch);
putchar ('\n');
return (0);
}
