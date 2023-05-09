#include "main.h"

#define BUF_SIZE 1024

/**
 * main - entry point
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: 0 on success, 97-100 on error
 */
int main(int argc, char **argv)
{
	int ffrom, fto, nr, nw;
	char buf[BUF_SIZE];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	ffrom = open(argv[1], O_RDONLY);
	if (ffrom == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit(98);

	fto = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fto == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);

	while ((nr = read(ffrom, buf, BUF_SIZE)) > 0)
	{
		nw = write(fto, buf, nr);
		if (nw != nr)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}

	if (nr == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]), exit (98);

	if (close(ffrom) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", ffrom), exit(100);

	if (close(fto) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fto), exit(100);

	return (0);
}
