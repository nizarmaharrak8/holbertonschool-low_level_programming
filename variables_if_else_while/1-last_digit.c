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
	int n;
        int x;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = n%10;
	if (n > 5)
	{
		printf("Last digit of %d is and is %d greater than 5\n", n, x);
	}
		else if (n < 6)
		{
			printf("Last digit of %d and is less %d than 6 and not 0\n", n, x);
		}
		else
		{	
			printf("Last digit of %d and is %d 0\n",n, x);
		}

	return (0);
}
