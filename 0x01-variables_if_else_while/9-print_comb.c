#include <stdio.h>
/**
 * main - Accept empty value
 * Return: (0) if is correct
 * Description: Write a program that prints all the numbers of base 16
 * in lowercase, followed by a new line.
 */
int main(void)
{
int (ch);
for (ch = '0' ; ch <= '9' ; ch++)
{
putchar(ch);
if (ch < '9')
{
putchar(',');
putchar(' ');
}
}
putchar ('\n');
return (0);
}
