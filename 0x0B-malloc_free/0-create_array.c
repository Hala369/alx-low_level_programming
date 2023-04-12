#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
* *create_array - creates an array of chars.
* @size: size of the array
* @c: char to initialize
* Return: pointer to the array, or NULL if it fails
*/
char *create_array(unsigned int size, char c)
{
	char *y = malloc(size);

	if (size == 0 || y == 0)
		return (0);

	while (size--)
		y[size] = c;

	return (y);
}
