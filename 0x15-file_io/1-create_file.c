#include "main.h"

/**
 * create_file - creates a file
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd, n_write = 0, n_bytes = 0;

	if (filename == NULL)
		return (-1);

	/* create new file || truncate existing one */
	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	/* write text_content to file */
	if (text_content != NULL)
	{
		while (text_content[n_bytes] != '\0')
			n_bytes++;

		n_write = write(fd, text_content, n_bytes);
		if (n_write == -1)
			return (-1);
	}

	close(fd);
	return (1);
}
