#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <elf.h>

int main(int argc, char **argv)
{
    int fd;
    Elf64_Ehdr header;
    int i;

    if (argc != 2)
    {
        fprintf(stderr, "Usage: %s <file>\n", argv[0]);
        return 1;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
        return 1;
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header))
    {
        fprintf(stderr, "Error: Can't read file %s\n", argv[1]);
        return 1;
    }

    if (header.e_ident[0] != ELFMAG0 || header.e_ident[1] != ELFMAG1 ||
        header.e_ident[2] != ELFMAG2 || header.e_ident[3] != ELFMAG3)
    {
        fprintf(stderr, "Error: %s is not an ELF file\n", argv[1]);
        return 98;
    }

    printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++)
    {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\nClass:                             %d\n", header.e_ident[EI_CLASS]);
    printf("Data:                              %d\n", header.e_ident[EI_DATA]);
    printf("Version:                           %d\n", header.e_ident[EI_VERSION]);
    printf("OS/ABI:                            %d\n", header.e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header.e_ident[EI_OSABI]);
    printf("ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("Type:                              %d\n", header.e_type);
    printf("Entry point address:               0x%lx\n", header.e_entry);

    return 0;
}
