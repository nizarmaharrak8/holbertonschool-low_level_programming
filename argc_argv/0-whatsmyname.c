#include <stdio.h>

/**
 * main - Prints the name of the program, followed by a new line.
 * @argc: Number of arguments.
 * @argv: Array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
(void)argc;
printf("%s\n", argv[0]);
return 0;
}
