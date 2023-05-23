#include "main.h"

/**
* binary_to_uint -  converts a binary number to an unsigned int
* @b: the binary number
* Return: the converted number
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int t;
	int l;
	int k;

	if (!b)
		return (0);

	t = 0;

	for (l = 0; b[l] != '\0'; l++)
		;

	for (l--, k = 1; l >= 0; l--, k *= 2)
	{
		if (b[l] != '0' && b[l] != '1')
		{
			return (0);
		}

		if (b[l] & 1)
		{
			t += k;
		}
	}

	return (t);
}
