#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - a function that reads a text file and prints it to the
 * POSIX standard output
 * @filename: A pointer to the name of the file
 * @letters: The number of letters it should read and print
 *
 * return: the actual number of letters it can read and print
 * return 0 if filename is NULL and if write fails
 * or does not write the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, readed;
	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);
	if (!filename)
		return (0);
	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);
	readed = read(fd, buff, letters);
	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);

	return (readed);
}
