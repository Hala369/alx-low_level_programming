#include "main.h"
/**
* print_most_numbers - checks for checks for a digit (0 through 9).
*
* Return: Always 0.
*/
void print_most_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		if (c != 50 && c != 52)
			putchar(c);
	}
	putchar('\n');
}