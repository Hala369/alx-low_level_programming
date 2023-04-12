#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
* *_strdup - duplicate to new memory space location
* @str: string
* Return: 0
*/
char *_strdup(char *str)
{
	int y = 0, size = 0;
	char *x;

	if (str == NULL)
		return (NULL);
	for (; str[size] != '\0'; size++)
	;

	/*+1 on the size puts the end of string character*/
	x = malloc(size * sizeof(*str) + 1);

	if (x == 0)
	{
		return (NULL);
	}
	else
	{
		for (; y < size; y++)
			x[y] = str[y];
	}
	return (x);
}
