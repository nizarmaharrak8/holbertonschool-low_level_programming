#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - calls a function to print a name
 * @name: name of the person to print
 * @f: pointer to a function that takes a char * and returns nothing
 *
 * Description: If f is not NULL, this function calls f(name),
 * allowing different printing behaviors depending on the function passed.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}

