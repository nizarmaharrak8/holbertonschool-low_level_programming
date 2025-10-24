#include "main.h"

/**
 * puts2 - Prints every other character of a string, starting with the first
 * @str: The string to print from
 *
 * Description: Prints characters at positions 0, 2, 4, etc.,
 * followed by a new line. Works safely for empty strings.
 */
void puts2(char *str)
{
int i = 0;

if (str == NULL)
return;

while (str[i] != '\0')
{
_putchar(str[i]);
i += 2;
}

_putchar('\n');
}
