#include <stdlib.h>
#include <time.h>
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

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5)
	{
		printf("Last digit of %d is and is greater than 5\n", n);
	}
		else if (n < 6)
		{
			printf("Last digit of %d and is less than 6 and not 0\n",n);
		}
		else
		{	
			printf("Last digit of %d and is 0\n",n);)
		}

	return (0);
}
