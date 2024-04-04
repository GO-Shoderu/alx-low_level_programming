#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - this is the entry function
 * @filename: this gets the name of the file
 * @letters: this is for retreiving total number of letters
 *
 * Return: 0 for errors something else for response
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buffer;
	ssize_t bytes_read, bytes_written;

	fd = open(filename, O_RDONLY);

	if (filename == NULL || fd == -1)
		return (0);

	buffer = (char *)malloc((letters + 1) * sizeof(char));

	if (!(buffer))
	{
		close(fd);
		return (0);
	}

	bytes_read = read(fd, buffer, letters);
	if (bytes_read == -1)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	buffer[bytes_read] = '\0';
	bytes_written = write(STDOUT_FILENO, buffer, bytes_read);

	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		close(fd);
		free(buffer);
		return (0);
	}

	close(fd);
	free(buffer);

	return (bytes_read);
}
