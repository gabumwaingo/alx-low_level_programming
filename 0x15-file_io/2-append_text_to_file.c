#include "main.h"
#include <stdlib.h>

/**
 * append_text_to_file - appends text to file
 * @filename: name of the file
 * @text_content: the text to be appended
 * Return: 1 success -1 fail
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, len;

	if (filename == NULL)
		return (-1);
	len = 0;
	if (text_content == NULL)
	{
		if (access(filename, F_OK) == 0)
			return (1);
		else
			return (-1);
	}
	while (text_content[len] != '\0')
	{
		len++;
	}
	o = open(filename, O_RDWR | O_APPEND);
	w = write(o, text_content, len);

	if (o == -1 || w == -1)
		return (-1);

	close(o);
	return (1);
}
