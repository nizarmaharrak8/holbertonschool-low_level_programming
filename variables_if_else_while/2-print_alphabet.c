#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point of the program
 *
 * Description: Generates a random number and prints whether
 * the last digit is >5, is 0, or <6 and not 0.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int x;
for (x = 'a'; x <= 'z'; x++)
{
putchar(x);
putchar(x + 1);

}
putchar('\n');


return (0);
}
