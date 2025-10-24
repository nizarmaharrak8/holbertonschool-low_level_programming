#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints n elements of an array of integers
 * @a: Pointer to the first element of the array
 * @n: Number of elements to print
 *
 * Description: Prints the integers in the same order as in the array,
 * separated by comma and space, followed by a new line.
 */
void print_array(int *a, int n)
{
int i;

if (!a || n <= 0)
{
printf("\n");
return;
}

for (i = 0; i < n; i++)
{
printf("%d", a[i]);
if (i != n - 1)
printf(", ");
}
printf("\n");
}

