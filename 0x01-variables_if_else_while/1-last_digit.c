#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry
 * Return: Always 0
 */

/* betty style doc for function main goes there */
int main(void)
{
	int n, m;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;

	if (m == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, m);
	} else if (m > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, m);
	} else if (m < 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, m);
	} return (0);
}
