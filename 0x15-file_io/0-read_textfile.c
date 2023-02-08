#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  reads text files and prints to stdout
 * @filename: name of file to be read
 * @letters: the number of letters it reads
 * Return: number of letters it reads and prints
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *ch = NULL;

	if (filename == NULL)
		return (0);
	ch = malloc(sizeof(char) * letters);
	if (ch == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, ch, letters);
	w = write(STDOUT_FILENO, ch, r);

	if (0 == -1 || r == -1 || w == -1 || w != r)
	{
		free(ch);
		return (0);
	}
	free(ch);
	close(o);
	return (w);
}

