#include "main.h"

/**
 * main - Entry point
 *
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 on success, 98 on error
 */
int main(int argc, char **argv)
{
	int fd;
	Elf64_Ehdr header;

	if (validate_arguments(argc, argv) == ERROR)
		return (ERROR);

	fd = open_file(argv[1]);
	if (fd == ERROR)
		return (ERROR);

	if (read_header(fd, &header) == ERROR)
		return (ERROR);

	print_header_info(header);

	close(fd);
	return (0);
}

/**
 * validate_arguments - Check if the program was invoked with the right arguments
 *
 * @argc: Number of arguments
 * @argv: Array of argument strings
 *
 * Return: 0 if arguments are valid, 98 if arguments are invalid
 */
int validate_arguments(int argc, char **argv)
{
	if (argc != 2)
	{
		fprintf(stderr, "Usage: %s <file>\n", argv[0]);
		return (ERROR);
	}
	return (0);
}

/**
 * open_file - Open an ELF file and return its file descriptor
 *
 * @filename: Name of the file to open
 *
 * Return: File descriptor on success, 98 on error
 */
int open_file(char *filename)
{
	int fd;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		fprintf(stderr, "Error: Can't open file %s\n", filename);
		return (ERROR);
	}

	return (fd);
}

/**
 * read_header - Read an ELF header from a file
 *
 * @fd: File descriptor of the file containing the ELF header
 * @header: Pointer to an Elf64_Ehdr struct to store the header data in
 *
 * Return: 0 on success, 98 on error
 */
int read_header(int fd, Elf64_Ehdr *header)
{
	if (read(fd, header, sizeof(*header)) != sizeof(*header))
	{
		fprintf(stderr, "Error: Can't read file\n");
		return (ERROR);
	}

	if (header->e_ident[0] != ELFMAG0 || header->e_ident[1] != ELFMAG1 ||
		header->e_ident[2] != ELFMAG2 || header->e_ident[3] != ELFMAG3)
	{
		fprintf(stderr, "Error: Not an ELF file\n");
		return (ERROR);
	}

	return (0);
}

/**
 * print_header_info - Print the information in an ELF header
 *
 * @header: The ELF header to print
 */
void print_header_info(Elf64_Ehdr header)
{
	int i;

	printf("Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
	{
		printf("%02x ", header.e_ident[i]);
	}
	printf("\nClass:                             %d\n", header.e_ident[EI_CLASS]);
	printf("Data:                              %d\n", header.e_ident[EI_DATA]);
	printf("Version:                           %d\n", header.e_ident[EI_VERSION]);
	printf("OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
	printf("ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
	printf("Type:                              %d\n", header.e_type);
	printf("Entry point address:               0x%lx\n", header.e_entry);
}
