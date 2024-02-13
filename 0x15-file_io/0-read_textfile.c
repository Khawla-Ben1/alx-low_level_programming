#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to file's name.
 * @letters: The number of letters.
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, re, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer ==  NULL)
		return (0);

	op = open(filename, O_RDONLY);
	re = read(op, buffer, letters);
	w = write(STDOUT_FILENO, buffer, re);

	if (op == -1 || re == -1 || w == -1 || w != re)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(op);

	return (w);

}
