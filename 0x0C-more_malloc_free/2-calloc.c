#include <stdlib.h>
#include "main.h"

/**
* *_memset - fills memory with a constant byte
* @s: memory area to be filled
* @b: char to copy
* @n: number of times to copy b
* Return: pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int d;

	for (d = 0; d < n; d++)
	{
	s[d] = b;
	}
	return (s);
}


/**
* *_calloc - allocates memory for an array
* @nmemb: number of elements.
* @size: size of bytes
* Return: pointer to allocated memory
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *q;

	if (nmemb == 0 || size == 0)
	return (NULL);
	q = malloc(size * nmemb);
	if (q == NULL)
	return (NULL);
	_memset(q, 0, nmemb * size);
	return (q);
}
