#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- fubction reads text file
 * @filename: pointer text file being read
 * @letters: number of letters to be read
 * Return: w- 0 when function filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t v;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	v = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (v);
}
