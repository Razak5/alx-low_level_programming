#include <stdio.h>
#include "main.h"
#include <stdlib.h>


char *makeBuffer(char *file);
void close_file(int fd);


/**
 * makeBuffer - allocates to buffer 1024 bytes
 * @file: buffer will store chars here
 * Return: pointer to our brand new buffer
 */

char *makeBuffer(char *file)
{
	{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);

	}

	return (buffer);

}

}

/**
 * close_file - will close fd
 * @fd: file descriptor we are to close
 */

void close_file(int fd)
{
	int storeClosed;

storeClosed = close(fd);

if (storeClosed == -1)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
			exit(100);
		}
	}


/**
 * main - will copy file a comntent to file b.
 * @argv[]: pointer to argc
 * @argc: argument count
 * @argv: args
 * Return: 0
 */

int main(int argc, char *argv[])
{
int from, to, storeRead, storeWrite;
char *buffer;

if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}

buffer = makeBuffer(argv[2]);
from = open(argv[1], O_RDONLY);
storeRead = read(from, buffer, 1024);
to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || storeRead == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}

		storeWrite = write(to, buffer, storeRead);
		if (to == -1 || storeWrite  == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}

		storeRead = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (storeRead > 0);


free(buffer);
close_file(from);
close_file(to);

return (0);
}
