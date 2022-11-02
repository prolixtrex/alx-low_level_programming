#include "main.h"

/**
 * create_file - function that creates file
 * @filename: name of file to create
 * @text_content: file content
 * Return: return status
 */

int create_file(const char *filename, char *text_content)
{
	int new_file, wr, len;

	if (filename == NULL)
		return (-1);

	new_file = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (new_file == -1)
		return (-1);
	if (text_content == NULL)
	{
		free(new_file);
		return (1);
	}

	for (len = 0; text_content[len]; len++)
		;
	wr = write(new_file, text_content, len);
	if (close(new_file) == -1)
		return (-1);
	return (wr == -1 ? -1 : 1);
}
