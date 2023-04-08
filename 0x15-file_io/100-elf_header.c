/* AUTHOR: ALIYU ADEKOLA */

#include "main.h"

/**
 * display_error - Display an error message to stderr and exit with status code 98
 * @msg: The error message to display
 *
 * Return: Nothing
 */
void display_error(char *msg)
{
	fprintf(stderr, "%s\n", msg);
	exit(98);
}

/**
 * read_elf_header - Read the ELF header from the given file descriptor
 * @fd: The file descriptor to read from
 * @header: A pointer to an Elf64_Ehdr structure to hold the header data
 *
 * Return: 0 on success, or -1 on failure
 */
int read_elf_header(int fd, Elf64_Ehdr *header)
{
	ssize_t n;

	n = read(fd, header, sizeof(*header));
	if (n == -1)
		return (-1);
	if (n != sizeof(*header) ||
			header->e_ident[EI_MAG0] != ELFMAG0 ||
			header->e_ident[EI_MAG1] != ELFMAG1 ||
			header->e_ident[EI_MAG2] != ELFMAG2 ||
			header->e_ident[EI_MAG3] != ELFMAG3)
		return (-1);
	return (0);
}

/**
 * print_elf_header - Print the ELF header in the format of readelf -h
 * @header: A pointer to the Elf64_Ehdr structure containing the header data
 *
 * Return: Nothing
 */
void print_elf_header(Elf64_Ehdr *header)
{
	printf("ELF Header:\n");
	printf("  Magic:   ");
	for (int i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	printf("  Class:                             %s\n",
			header->e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" :
			header->e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "Invalid class");
	printf("  Data:                              %s\n",
			header->e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" :
			header->e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "Invalid data encoding");
	printf("  Version:                           %d %s\n",
			header->e_ident[EI_VERSION],
			header->e_ident[EI_VERSION] == EV_CURRENT ? "(current)" : "");
	printf("  OS/ABI:                            ");
	switch (header->e_ident[EI_OSABI])
	{
		case ELFOSABI_SYSV: printf("UNIX - System V\n"); break;
		case ELFOSABI_HPUX: printf("UNIX - HP-UX\n"); break;
		case ELFOSABI_NETBSD: printf("UNIX - NetBSD\n"); break;
		case ELFOSABI_LINUX: printf("UNIX - Linux\n"); break;
		case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
		case ELFOSABI_AIX: printf("UNIX - AIX\n"); break;
		case ELFOSABI_IRIX: printf("UNIX - IRIX\n"); break;
		case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
		case ELFOSABI_TRU64: printf("UNIX - TRU64\n"); break;
		case ELFOSABI_MODESTO: printf("Novell - Modesto\n"); break;
		case ELFOSABI_OPENBSD:
