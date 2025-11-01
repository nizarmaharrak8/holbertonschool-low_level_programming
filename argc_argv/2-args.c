#include "main.h"

/**
 * main - Prints all arguments received by the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of strings containing the arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
int i;

for (i = 0; i < argc; i++)
{
printf("%s\n", argv[i]);
}
return (0);
}
