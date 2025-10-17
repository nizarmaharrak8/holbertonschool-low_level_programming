#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Description: Prints the alphabet in lowercase,
 * then in uppercase, followed by a new line.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    char x;

    for (x = 'a'; x <= 'z'; x++)
        putchar(x);  // First putchar: lowercase letters

    for (x = 'A'; x <= 'Z'; x++)
        putchar(x);  // Second putchar: uppercase letters

    putchar('\n');     // Third putchar: new line

    return (0);
}
