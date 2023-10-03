#include "main.h"

#include <stdlib.h>

#include <sys/types.h>
#include <sys/stat.h>
#include <sys/uio.h>

#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>


int safe_close(int);
/**
 * main - the Main function to copy files
 * @argc: The number of passed arguments
 * @argv: The pointers to array arguments
 * Return: 1 on success, exits on failure
 */


int main(int argc, char *argv[])
{
	char buffer[1024];
	int byts_read = 0, _EOF = 1, from_ = -1, to_ = -1, err = 0;


	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	from_ = open(argv[1], O_RDONLY);
	if (from_ < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	to_ = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	if (to_ < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		_close(from_);
		exit(99);
	}

	while (_EOF)
	{
		_EOF = read(from_, buffer, 1024);
		if (_EOF < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			_close(from_);
			_close(to_);
			exit(98);
		}
		else if (_EOF == 0)
			break;
		byts_read += _EOF;
		err = write(to_, buffer, _EOF);
		if (err < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			_close(from_);
			_close(to_);
			exit(99);
		}
	}
	err = _close(to_);
	if (err < 0)
	{
		_close(from_);
		exit(100);
	}
	err = _close(from_);
	if (err < 0)
		exit(100);
	return (0);
}




/**
 * _close - this is a function that closes a file and
 * prints error when closed file
 * @desc: Description error for closed file
 * Return: 1 on success, -1 on failure
 */

int _close(int desc)
{
	int err;

	err = close(desc);
	if (err < 0)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", desc);
	return (err);
}
