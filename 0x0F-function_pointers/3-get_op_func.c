#include "3-calc.h"
#include <stdio.h>
#include <string.h>

/**
 * get_op_func - gets apptopriate func user needs
 * @s: operation passed as argument
 * Return: pointer to the function of operation passed
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
	int i = 0;

	while (i < 5)
	{
		if (strcmp(s, ops[i].op) == 0)
			return (ops[i].f);
		i++;
	}
	return (0);
}
