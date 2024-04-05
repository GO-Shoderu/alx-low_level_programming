#include "main.h"

/**
 * create_file - this is the entry function
 * @filename: this gets the name of the file
 * @text_content: this is for retreiving string to put in the file
 *
 * Return: 0 for errors something else for response
 */

int create_file(const char *filename, char *text_content)
{
	int f;
	int length, res;

	if (filename == NULL)
		return (-1);
	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (f == -1)
		return (-1);

	if (!text_content)
		return (1);
	length = 0;
	while (text_content[length] != '\0')
		length += 1;

	res = write(f, text_content, length);
	if (res != length)
		return (-1);
	res = close(f);
	if (res == -1)
		exit(-1);

	return (1);
}
