#include "3-calc.h"

/**
 * get_op_func - selects the correct operation function
 * @s: operator string passed as argument
 *
 * Return: pointer to the function corresponding to the operator
 *         or NULL if operator is invalid
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i;

	i = 0;
	while (ops[i].op)
	{
		if (*s == *(ops[i].op) && !s[1])
			return (ops[i].f);
		i++;
	}
	return (NULL);
}

