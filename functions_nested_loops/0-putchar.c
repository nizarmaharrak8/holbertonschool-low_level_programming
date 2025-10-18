#include <stdio.h>
/**
* _putchar - writes a character to stdout
* @c: The character to print
*
* Return: On success 1, on error -1
*/
int _putchar(char c); // function prototype

int main(void)
{
char *str = "_putchar\n";
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}

return 0;
}

