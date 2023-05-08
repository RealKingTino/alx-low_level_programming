#include "main.h"

/**
 * read_textfile - reads and prints the contents of a text file
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written, total_written = 0;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	while (n_read > 0)
	{
		n_written = write(STDOUT_FILENO, buffer, n_read);
		if (n_written == -1)
		{
			free(buffer);
			close(fd);
			return (0);
		}

		total_written += n_written;
		n_read -= n_written;
	}

	free(buffer);
	close(fd);
	return (total_written);
}
