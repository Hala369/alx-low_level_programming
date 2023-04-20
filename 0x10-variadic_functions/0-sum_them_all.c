#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
* sum_them_all - a function that returns the sum of all its parameters.
* @n: The number of paramters passed to the function.
* Return: sumof arguments
*/
int sum_them_all(const unsigned int n, ...)
{
	int sum;
	unsigned int b;
	va_list list;

	va_start(list, n);
	for (b = 0, sum = 0; b < n; b++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
