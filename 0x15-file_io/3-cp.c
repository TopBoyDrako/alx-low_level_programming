#include <stdlib.h>
#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#define BUF_SIZE 1024

void error_98(int fd, char *buffer, char *argv);
void error_99(int fd, char *buffer, char *argv);
void error_100(int fd, char *buffer);

/**
 * main - main
 * @argc: number of arguments
 * @argv: a pointer pointing to the array of arguments
 * Return: 0
 **/

int main(int argc, char **argv)
{
	int fo0, fo1, res0, res1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "usage: cp filr_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * BUF_SIZE);
	if (!buffer)
		return (0);

	fo1 = open(argv[1], O_RDONLY);
	error_98(fo1, buffer, argv[1]);
	fo0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_99(fo0, buffer, argv[2]);
	do {
		res0 = read(fo1, buffer, BUF_SIZE);
		if (res0 == 0)
			break;
		error_98(res0, buffer, argv[1]);

		res1 = write(fo0, buffer, res0);
		error_98(res1, buffer, argv[2]);

	} while (res1 >= BUF_SIZE);
	res0 = close(fo0);
	error_100(res0, buffer);
	res0 = close(fo1);
	error_100(res0, buffer);
	free(buffer);
	return (0);
}

/**
 * error_98 - checks error 98
 * @fo0: the value to check
 * @buffer: the buffer
 * @argv: argument
 **/

void error_98(int fo0, char *buffer, char *argv)
{
	if (fo0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
 * error_99 - This checks error 99
 * @fo0: The valuie to be checked
 * @buffer: the buffer
 * @argv: argument
 **/

void error_99(int fo0, char *buffer, char *argv)
{
	if (fo0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can;t write to %s \n", argv);
		free(buffer);
		exit(99);
	}
}

/**
 * error_100 - checks error 100
 * @fo0: th evalue to be checked
 * @buffer: the buffer
 **/

void error_100(int fo0, char *buffer)
{
	if (fo0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", fo0);
		free(buffer);
		exit(100);
	}
}
