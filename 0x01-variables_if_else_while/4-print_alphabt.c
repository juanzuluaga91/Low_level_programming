#include <stdio.h>
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
if (ch != 'e' && ch != 'q')
putchar(ch);
putchar ('\n');
return (0);
}
