#include "holberton.h"
#include <stdio.h>
/**
 *infinite_add - adds two numbers.
 *@n1: first number to be summed
 *@n2: second number to be summed
 *@r: output buffer
 *@size_r: buffer size
 *Return: pointer to output
 */

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i = 0;
	int control;
	int cont = 0;
	int tmpCont = 0;
	unsigned long long int tmp = 1;
	unsigned long long int num1 = 0;
	unsigned long long int num2 = 0;
	unsigned long long int tmpResult;

	while (*(n1 + i))
	{
		i++;
	}
	while (cont != i)
	{
		tmpCont = 0;
		while (tmpCont != cont)
		{
			tmp *= 10;
			tmpCont++;
		}
		num1 += *(n1 + (i - cont)) * tmp;
		cont++;
	}

	i = 0;
	while (*(n2 + i))
	{
		num2 += *(n2 + i) + '0';
		i++;
	}

	printf("%lli | %lli\n", num1, num2);
	tmpResult = num1 + num2;
	printf("%lli", tmpResult);


	i = 0;
	control = tmpResult;
	while (control != 0 )
	{
		control /= 10;
		i++;
	}

	if (i == size_r)
	{
		while (i != 0)
		{
			*(r + i) = tmpResult % 10;
			tmpResult /= 10;
			i--;
		}
		return (r);
	}
	else
	{
		return (0);
	}
}
