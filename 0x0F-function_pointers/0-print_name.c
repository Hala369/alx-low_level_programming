include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
* print_name - a function that prints a name.
* @name: string to add
* @f: Pointer to function
* Return: void
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
	{
		f(name);
	}
}
