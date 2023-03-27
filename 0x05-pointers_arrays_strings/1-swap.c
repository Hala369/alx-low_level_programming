#include "main.h"
/**
* swap_int - swaps the values of two integers
* Owned by Bwave/Bright
* @a: integer to swap
* @b: integer to swap
* Return 0
*/
void swap_int(int *a, int *b)
{
		int s;

		s = *a;
		*a = *b;
		*b = s;
}
