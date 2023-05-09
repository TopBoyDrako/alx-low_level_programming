#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Function that reads a
 * text file print to STDOUT.
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: Number of bytes read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fd;
	ssize_t num;
	ssize_t writ;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	num = read(fd, buffer, letters);
	writ = write(STDOUT_FILENO, buffer, num);

	free(buffer);
	close(fd);
	return (writ);
}

