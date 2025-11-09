#include "dog.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	struct dog my_dog;

	init_dog(&my_dog, "Poppy", 3.5, "Bob");
	printf("My dog: %s, %.1f, owned by %s\n", my_dog.name, my_dog.age, my_dog.owner);
	return (0);
}
