#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

/**
 * append_text_to_file - this is the entry function
 * @filename: this gets the name of the file
 * @text_content: this is for retreiving string to put in the file
 *
 * Return: 0 for errors something else for response
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int f, res, length;

	if (filename == NULL)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);

	if (f == -1)
		return (-1);

	if (!text_content)
		return (1);

	length = 0;

	while (text_content[length])
		length += 1;

	res = write(f, text_content, length);

	if (res == -1)
		return (-1);

	res = close(f);

	if (res == -1)
		return (-1);

	return (1);
}
