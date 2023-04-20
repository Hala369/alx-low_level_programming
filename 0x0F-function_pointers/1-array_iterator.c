#include "function_pointers.h"
#include <stdio.h>

/**
* array_iterator - executes a function
* @array: the array
* @size: how many elem to print
* @action: is a pointer to the function 
* return: void
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int y;

	if (!array || !action)
		return;
	y = 0;
	while (y < size)
	{
		action(array[y]);
		y++;
	}
}
