#include "main.h"

/**
 * create_file -  a function that creates a file.
 * @filename: the name of the file.
 * @text_content: a string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int f, rw, i;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (i = 0; text_content[i] != '\0'; i++)
			;
		rw = write(f, text_content, i);
		if (rw == -1)
			return (-1);
	}

	close(f);
	return (1);
}
