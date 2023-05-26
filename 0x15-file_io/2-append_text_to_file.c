#include "main.h"

/**
 *append_text_to_file - Append text to file
 *@filename: pointer to file name
 *@text_content: the string to append
 *Return: --1 if file name = NULL, else return -1.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int storeOpen, storeWrite, strLen = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (strLen = 0; text_content[strLen];)
			strLen++;
	}

	storeOpen = open(filename, O_WRONLY | O_APPEND);
	storeWrite = write(storeOpen, text_content, strLen);

	if (storeOpen == -1 || storeWrite == -1)
		return (-1);

	close(storeOpen);

	return (1);

}

