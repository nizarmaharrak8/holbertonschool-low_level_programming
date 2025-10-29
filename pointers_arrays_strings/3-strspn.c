#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: the string to search in
 * @accept: the string containing the characters to match
 *
 * Return: number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;
	unsigned int count = 0;
	char *a;

	for (i = 0; s[i]; i++)
	{
		a = accept;
		for (j = 0; a[j]; j++)
		{
			if (s[i] == a[j])
				break;
		}

		if (!a[j])
			return (count);

		count++;
	}

	return (count);
}

