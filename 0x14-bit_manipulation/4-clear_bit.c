#include "main.h"

/**
* clear_bit - sets the value of a bit to 0 at a given index
* @n: the number to change
* @index: the bit to clear
* Return: 1 for success, -1 for failure
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int f;

	if (index > 63)
		return (-1);

	f = 1 << index;

	if (*n & f)
		*n ^= f;

	return (1);
}
