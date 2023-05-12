#include "main.h"
/**
* append_text_to_file - appends text at the end of a file
* @filename: A pointer to the name of the file.
* @text_content: The string to add to the end of the file.
* Return: 1 succes otherwise -1
*/
int append_text_to_file(const char *filename, char *text_content)
{
	int desc;
	int to_write;
	int j = 0;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_WRONLY | O_APPEND);
	if (desc < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[j])
			j++;
		to_write = write(desc, text_content, j);
		if (to_write != j)
			return (-1);
	}

	close(desc);

	return (1);
}
