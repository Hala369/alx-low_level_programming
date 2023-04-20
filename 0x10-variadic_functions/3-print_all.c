#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  a function that prints anything.
 * @format: a list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	unsigned int r = 0;
	va_list list;
	char *str, *sep = "";

	if (format)
	{
		va_start(list, format);
		while (format[r])
		{
			switch (format[r])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					r++;
					continue;
			}
			sep = ", ";
			r++;
		}
		va_end(list);
	}
	printf("\n");
}
