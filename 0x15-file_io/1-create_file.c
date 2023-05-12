#include "main.h"
#include <stdlib.h>
/**
* create_file - creats a file
* @filename: A pointer to the name of the file to create.
* @text_content:  A pointer to a string to write to the file
* Return: 1 on success, -1 on failure
*/
int create_file(const char *filename, char *text_content)
{
	int desc;
	int to_write;
	int f = 0;

	if (!filename)
		return (-1);
	desc = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (desc < 0)
		return (-1);
	if (text_content)
	{
		while (text_content[f])
			f++;
		to_write = write(desc, text_content, f);
		if (to_write != f)
			return (-1);
	}

	close(desc);

	return (1);
}
