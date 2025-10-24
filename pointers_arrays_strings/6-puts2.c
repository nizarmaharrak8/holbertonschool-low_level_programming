#include "main.h"
#include <stddef.h>

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: The string to print from
 *
 * Description: Prints characters at positions 0, 2, 4, etc.,
 * followed by a new line. Works safely for empty strings and long strings.
 */
void puts2(char *str)
{
int i, len;

if (!str)
return;

len = 0;
while (str[len] != '\0')
len++;

for (i = 0; i < len; i += 2)
_putchar(str[i]);

_putchar('\n');
}

