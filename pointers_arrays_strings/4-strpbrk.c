#include "main.h"

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: the string to search in
 * @accept: the string containing the bytes to match
 *
 * Return: pointer to the first occurrence in s of any byte in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				return (s + i);
		}
	}

	return (0);
}

