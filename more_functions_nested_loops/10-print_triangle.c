#include "main.h"

/**
 * print_triangle - prints a triangle using #
 * @size: The size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
	int row, space, hash;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (row = 1; row <= size; row++)
	{
		for (space = size - row; space > 0; space--)
			_putchar(' ');
		for (hash = 1; hash <= row; hash++)
			_putchar('#');

		_putchar('\n');
	}
}

