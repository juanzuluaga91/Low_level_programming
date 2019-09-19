#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Accept empty value
 * write - Screen information
 * @void: Description of a empty parameter
 *
 * Description: This is going give us if a random is positive or negative
 * Return: 0 Value if it works
 */
int main(void)
{
char ch;
for (ch = 'a' ; ch <= 'z' ; ch++)
{
putchar(ch);
}
for (ch = 'A' ; ch <= 'Z' ; ch++)
{
putchar(ch);
}
putchar ('\n');
return (0);
}
