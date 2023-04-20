#include "3-calc.h"
#include <stdlib.h>
/**
* get_op_func - function pointer to compute given an operator
* @s: The operator passed as argument.
* Return: pointer to the function that will do the op given as
* parameter as input
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
	int c = 0;

	while (ops[c].op != NULL && *(ops[c].op) != *s)
		c++;

	return (ops[c].f);
}
