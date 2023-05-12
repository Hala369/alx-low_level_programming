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
	int f = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	int l = write(f, text_content, strlen(text_content));

	if (filename == NULL)
		return (-1);

	if (f == -1)
		return (-1);
	if (text_content != NULL)
	{
		if (l == -1)
		{
			close(f);
			return (-1);
		}
	}
	close(f);
	return (1);
}
