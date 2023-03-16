/**
* *string_nconcat - concatenates n bytes of a string to another string
* @s1: string to append to
* @s2: string to concatenate from
* @n: number of bytes from s2 to concatenate to s1
*
* Return: pointer to the resulting string
*/

#include "main.h"

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	unsigned int length = n;
	unsigned int string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (string = 0; s1[string]; string++)
	{
		length++;
	}
	concat = malloc(sizeof(char) * (length + 1));
	if (concat == NULL)
	{
		return (NULL);
	}
	length = 0;
	for (string = 0; s1[string]; string++)
	{
		concat[length++] = s1[string];
	}
	for (string = 0; s2[string] && string < n; string++)
	{
		concat[length++] = s2[string];
	}
	concat[length] = '\0';
	return (concat);
}
