#include <stdio.h>
/**
 * main - Accept empty value
 * Return: (0) if is correct
 * Description: Write a program that prints all possible different
 * combinations of two digits.
 */
int main(void)
{
int ch, hc;
for (ch = '0'; ch <= '8'; ch++)
{
for (hc = '1'; hc <= '9'; hc++)
{
if (!(ch == hc) && ch < hc)
{
putchar(ch);
putchar(hc);
}
if (!(ch == '8' && hc == '9') && !(ch == hc) && (ch < hc))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}
