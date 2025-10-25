#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 *
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
	unsigned int result = 0;
	int i = 0, sign = 1;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign *= -1;
		i++;
	}

	while (s[i] >= '0' && s[i] <= '9')
	{
		result = (result * 10) + (s[i] - '0');
		i++;
	}

	/* Handle INT_MIN safely to avoid overflow */
	if (sign == -1)
	{
		if (result == 2147483648U)
			return (-2147483648);
		return (-((int)result));
	}

	return ((int)result);
}

