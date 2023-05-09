#include "main.h"

/**
 * create_file - Functions that creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Return: If the function fails - -1.
 */

int create_file(const char *filename, char *text_content)
{
	int fd, writ, num = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (num = 0; text_content[num];)
			num++;
	}

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	writ = write(fd, text_content, num);

	if (fd == -1 || writ == -1)
		return (-1);

	close(fd);

	return (1);
}

