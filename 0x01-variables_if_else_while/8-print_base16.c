#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0
 */

int main(void)
{
	char digit;

	for (digit = '0'; digit <= 'f'; digit++)
	{
		if (digit <= '9' || (digit >= 'a' && digit <= 'f'))
		{
			putchar(digit);
		}
	}
	putchar('\n');
	return (0);
}
