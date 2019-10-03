  
#include "holberton.h"

/**
 *reverse_array -  reverses a array.
 *@a: pointer to the array that will be reversed.
 *@n: number of elements of the array.
 *Return: none
 */

void reverse_array(int *a, int n)
{
	int j;
	int i;

	n--;
	for (j = n; j >= 0; j--)
	{
		if (j <= (n / 2))
		{
			i = *(a + j);
			*(a + j) = *(a + (n - j));
			*(a + (n - j)) = i;
		}
	}
}
