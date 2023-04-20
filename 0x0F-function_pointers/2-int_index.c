#include "function_pointers.h"
#include <stdio.h>
/**
* int_index -  a function that searches for an integer
* @array: an array
* @size: size of elements in array
* @cmp: a pointer to the function to be used to compare values
* Return: Integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int m;

	if (size <= 0)
		return (-1);
	if (array == NULL || cmp == NULL)
		return (-1);
	for (m = 0; m < size; m++)
	{
		if (cmp(array[m]) == 1)
			return (m);
	}
	return (-1);
}
