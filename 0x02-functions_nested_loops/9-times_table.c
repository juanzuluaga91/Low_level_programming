#include "holberton.h"
/**
 * times_table - prints the times table from 0 - 9.
(*
 * Return: Nothing.
 */
void times_table(void)
{
    int i, z, res;
    for (i = 0; i <= 9; i++)
    {
        for (z = 0; z <= 9; z++)
        {
            res = (i * z);
            if (z != 0)
            {
                _putchar(',');
                _putchar(' ');
            }
            if (res >= 10)
            {
                _putchar((res / 10) + '0');
                _putchar((res % 10) + '0');
            }
            else if (res < 10 && z != 0)
            {
                _putchar(' ');
                _putchar((res % 10) + '0');
            }
            else
                _putchar((res % 10) + '0');
        }
        _putchar('\n');
    }
}
