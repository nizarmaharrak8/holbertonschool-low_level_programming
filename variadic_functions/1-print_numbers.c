#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - Prints numbers followed by a separator and a new line
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 *
 * Description: Prints all given numbers separated by the separator string.
 * If separator is NULL, numbers are printed without any separator.
 * Always prints a new line at the end.
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(args, int));

		if (separator != NULL && i != n - 1)
			printf("%s", separator);
	}

	printf("\n");
	va_end(args);
}

