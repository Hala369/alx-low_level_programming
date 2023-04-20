#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_strings - Prints strings, followed by a new line.
* @separator: The string to be printed between strings
* @n: The number of strings passed to the function.
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int h;
	char *str;
	va_list list;

	va_start(list, n);
	for (h = 0; h < n; h++)
	{
		str = va_arg(list, char *);
		if (!str)
			str = "(nil)";
		printf("%s", str);
		if (separator && h != n - 1)
			printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
