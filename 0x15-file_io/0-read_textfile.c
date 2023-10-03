#include <fcntl.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>

#include <stdlib.h>
#include <unistd.h>

#include "main.h"

/**
 * read_textfile - this is a function that reads a text file and
 * prints to the POSIX STDOUT
 * @filename: name of file to open
 * @letters: The number of letters to read and print.
 * Return: The number of letters read and printed, or 0 on failure.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdo, fdr, fdw;
	char *temp;

	if (filename == NULL)
		return (0);
	temp = malloc(sizeof(char) * letters);
	if (temp == NULL)
		return (0);
	fdo = open(filename, O_RDONLY);
	if (fdo < 0)
	{
		free(temp);
		return (0);
	}


	fdr = read(fdo, temp, letters);
	if (fdr < 0)
	{
		free(temp);
		return (0);
	}

	fdw = write(STDOUT_FILENO, temp, fdr);
	free(temp);
	close(fdo);
	if (fdw < 0)
		return (0);

	return ((ssize_t)fdw);
}
