#include "main.h"
#include <stdlib.h>
/**
* read_textfile - Read text file print to STDOUT.
* @filename: text file being read
* @letters: number of letters to be read
* Return: the actual number of letters it could read and print
*/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int a;
	ssize_t s;
	ssize_t q;
	char *buffer;

	if (!filename)
		return (0);

	a = open(filename, O_RDONLY);

	if (a == -1)
		return (0);

	buffer = malloc(sizeof(char) * (letters));
	if (!buffer)
		return (0);

	s = read(a, buffer, letters);
	q = write(STDOUT_FILENO, buffer, s);

	close(a);

	free(buffer);

	return (q);
}
