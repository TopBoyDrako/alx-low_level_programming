#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that read text file print to STDOUT.
 * @filename: Name of file
 * @letters: number of letters to be read
 * Return:  number of bytes read
 *        0 when function fails or filename is NULL.
 **/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;

	ssize_t _read, _write;

	char  *buffer;

	if (!filename)
	{
		return (0);
	}

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	_read = read(f, buffer, letters);
	if (_read == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	_write = write(STDOUT_FILENO, buffer, _read);
	if (_write == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	close(f);
	return (_read);
}
