#include <stdlib.h>
#include "main.h"
/**
* *array_range - creates an array of integers
* @min: minimum value.
* @max: maximum value.
* Return: pointer to the newly created array.
*/
int *array_range(int min, int max)
{
	int *z;
	int w, size;

	if (min > max)
	return (NULL);
	size = max - min + 1;
	z = malloc(sizeof(int) * size);
	if (z == NULL)
	return (NULL);
	for (w = 0; min <= max; w++)
	z[w] = min++;
	return (z);
}
