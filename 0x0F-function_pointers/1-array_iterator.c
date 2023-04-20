#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - prints each array elem on a newl
* @array: the array
* @size: how many elem to print
* @action: pointer to print in regular or hex
* return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
