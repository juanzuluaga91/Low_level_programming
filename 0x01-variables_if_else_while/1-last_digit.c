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
int n, x;
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, x);
else if (x > 0 && x < 6)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
else
printf("Last digit of %d is %d and is 0\n", n, x);
return (0);
}
