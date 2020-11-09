#include "holberton.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 *
 * @filename : name of the text file to read
 * @letters : number of letters it should read and print
 *
 * Return: the actual numbers of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	int n, w;
	char *buf;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc((letters + 1) * sizeof(char));
	if (buf == NULL)
		return (0);

	n = read(fd, buf, letters);
	if (n == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	buf[n] = '\0';

	w = write(STDOUT_FILENO, buf, n);
	if (w == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	close(fd);
	free(buf);
	return (w);

}
