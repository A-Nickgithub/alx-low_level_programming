#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - read and print from a file
 * @filename: path to the file
 * @letters: chars to read
 * Return: chars read
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int f;
	ssize_t n;
	char *b;

	if (!filename)
		return (0);
	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);
	b = malloc(sizeof(char) * (letters));
	if (!b)
		return (0);
	n = read(f, b, letters);
	n = write(STDOUT_FILENO, b, n);
	close(f);
	free(b);
	return (n);
}
