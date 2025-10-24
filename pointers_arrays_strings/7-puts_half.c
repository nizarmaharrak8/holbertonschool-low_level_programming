#include "main.h"
#include <stddef.h>

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

