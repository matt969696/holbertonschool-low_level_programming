#include "holberton.h"
#include <stdlib.h>


/**
 * raiseError - return an error message on std err
 *
 * @text : error message
 * @arg : error argument
 * @fdfrom : file to close upon error
 * @exitnb : error number
 *
 * Return: 1 on success, -1 on failure
 */

void raiseError(char *text, char *arg, int exitnb, int fdfrom)
{
	dprintf(STDERR_FILENO, text, arg);

	if (fdfrom != 0)
		close(fdfrom);

	exit(exitnb);
}





/**
 * raiseErrorInt - return an error message on std err
 *
 * @text : error message
 * @arg : error argument
 * @fdfrom : file to close upon error
 * @exitnb : error number
 *
 * Return: 1 on success, -1 on failure
 */

void raiseErrorInt(char *text, int arg, int exitnb, int fdfrom)
{
	dprintf(STDERR_FILENO, text, arg);

	if (fdfrom != 0)
		close(fdfrom);

	exit(exitnb);
}



/**
 * main - copies the content of a file to another file
 *
 * @ac : number of arguments
 * @av : arguments
 *
 * Return: 1 on success, -1 on failure
 */

int main(int ac, char **av)
{
	int fdfrom, fdto, clfrom, clto, n, w;
	char buf[1024];

	if (ac != 3)
		raiseError("Usage: cp file_from file_to\n", 0, 97, 0);

	fdfrom = open(av[1], O_RDONLY);
	if (fdfrom == -1)
		raiseError("Error: Can't read from file %s\n", av[1], 98, 0);

	fdto = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fdto == -1)
		raiseError("Error: Can't write to %s\n", av[2], 99, fdfrom);

	while ((n = read(fdfrom, buf, 1024)) != 0)
	{
		if (n == -1)
			raiseError("Error: Can't read from file %s\n", av[1], 98, 0);

		w = write(fdto, buf, n);
		if (w == -1 || w != n)
			raiseError("Error: Can't write to %s\n", av[2], 99, fdfrom);
	}

	clfrom = close(fdfrom);
	clto = close(fdto);
	if (clfrom == -1)
		raiseErrorInt("Error: Can't close fd %i\n", fdfrom, 100, 0);

	if (clto == -1)
		raiseErrorInt("Error: Can't close fd %i\n", fdto, 100, 0);

	return (1);
}
