#include "main.h"
#include <stddef.h>

/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: The string to print
 *
 * Description: If the length of the string is odd, prints the last
 * (length + 1) / 2 characters. Prints nothing if str is NULL.
 */
void puts_half(char *str)
{
int len = 0, i, start;

if (!str)
return;

while (str[len] != '\0')
len++;

start = len / 2;
if (len % 2)
start = (len + 1) / 2;

for (i = start; i < len; i++)
_putchar(str[i]);

_putchar('\n');
}

