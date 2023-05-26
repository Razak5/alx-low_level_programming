#include "main.h"

/**
 * create_file - this will create file
 * @filename: pointer to file name
 * @text_content: pointer to the file content
 * Return: -1
 */

int create_file(const char *filename, char *text_content)
{
	int filedes, storewrite, strlen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strlen = 0; text_content[strlen];)
		strlen++;
	}

	filedes = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	storewrite = write(filedes, text_content, strlen);

	if (filedes == -1 || storewrite == -1)
		return (-1);

	close(filedes);

	return (1);
}

