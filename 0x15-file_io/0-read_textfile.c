#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX.
 * @filename: the name of the file.
 * @letters: number of letters it should read and print.
 *
 * Return: the actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fpt;
	ssize_t nr, nw;
	char *b = malloc(sizeof(char) * letters);

	if (!filename)
		return (0);

	if(!b)
		return (0);

	fpt = open(filename, O_RDONLY);
	if (fpt == -1)
	{
		free(b);
		return (0);
	}

	nr = read(fpt, b, letters);
	if (nr == -1)
	{
		free(b);
		close(fpt);
		return (0);
	}

	nw = write(STDOUT_FILENO, b, nr);
	if (nw == -1 || nw != nr)
	{
		free(b);
		close(fpt);
		return (0);
	}

	free(b);
	close(fpt);
	return (nw);
}
