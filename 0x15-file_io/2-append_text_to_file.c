#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Funcion that append text to a file
 * @filename: name of file to open
 * @text_content: contetnt to append to file
 * Return: return status
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int append, wr, len;

	if (filename == NULL)
		return (-1);
	append = open(filename, O_WRONLY | O_APPEND);

	if (append == -1)
		return (-1);

	if (text_content == NULL)
		return (1);
	for (len = 0; text_content[len]; len++)
		;
	wr = write(append, text_content, len);

	close(append);
	return (wr == -1 ? -1 : 1);
}
