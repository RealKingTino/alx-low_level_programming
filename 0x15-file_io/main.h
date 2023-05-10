#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#define BUFSIZE 1024
#include <elf.h>
#include <stdio.h>

#define ERROR 98

int validate_arguments(int argc, char **argv);
int open_file(char *filename);
int read_header(int fd, Elf64_Ehdr *header);
void print_header_info(Elf64_Ehdr header);
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);



#endif /* MAIN_H */
