#include "main.h"
#include <stdlib.h>

/**
 * read_textfile -  read file of type txt to STDOUT
 * @filename: the file we want to read
 * @letters: the number of letters we want to read
 * Return: w - the number of bytes read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, t);

	free(buff);
	close(fd);
	return (w);
}

