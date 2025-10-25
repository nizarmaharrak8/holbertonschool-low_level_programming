#include "main.h"

/**
 * is_separator - checks if a character is a word separator
 * @c: the character to check
 *
 * Return: 1 if separator, 0 otherwise
 */
int is_separator(char c)
{
	char sep[] = " \t\n,;.!?\"(){}";

	int i = 0;

	while (sep[i] != '\0')
	{
		if (c == sep[i])
			return (1);
		i++;
	}

	return (0);
}

/**
 * cap_string - capitalizes all words of a string
 * @s: the string to modify
 *
 * Return: pointer to the resulting string
 */
char *cap_string(char *s)
{
	int i = 0;

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] = s[0] - ('a' - 'A');

	while (s[i] != '\0')
	{
		if (is_separator(s[i]) && s[i + 1] != '\0')
		{
			if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				s[i + 1] = s[i + 1] - ('a' - 'A');
		}
		i++;
	}

	return (s);
}

