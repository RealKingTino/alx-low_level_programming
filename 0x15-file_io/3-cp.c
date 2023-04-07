#include "main.h"

/**
 * main - copies the content of one file to another
 *
 * @ac: the number of arguments passed to the program
 * @av: an array of strings containing the arguments
 *
 * Return: 0 on success
 */
int main(int ac, char **av)
{
	int from_fd, to_fd, read_bytes;
	char buf[BUFSIZE];

	/* check that the correct number of arguments are passed */
	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	/* open the file to copy */
	from_fd = open(av[1], O_RDONLY);
	if (from_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	/* create or truncate the output file and open it for writing */
	to_fd = open(av[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (to_fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);

	/* read from input file and write to the output file */
	while ((read_bytes = read(from_fd, buf, BUFSIZE)) > 0)
	{
		if (write(to_fd, buf, read_bytes) != read_bytes)
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]), exit(99);
	}

	/* check for read or write errors */
	if (read_bytes == -1)
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]), exit(98);

	/* close files and check for errors */
	if (close(from_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", from_fd), exit(100);
	if (close(to_fd) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", to_fd), exit(100);

	return (0);
}
