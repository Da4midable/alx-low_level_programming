#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

void error(char *progname, char *filename) {
    fprintf(stderr, "%s: Error: %s is not an ELF file\n", progname, filename);
    exit(98);
}

int main(int argc, char **argv) {
    int fd;
    ssize_t bytes;
    char magic[4];
    Elf64_Ehdr header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return (1);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error opening file");
        return (98);
    }

    bytes = read(fd, magic, 4);
    if (bytes != 4 || magic[0] != 0x7f || magic[1] != 'E' || magic[2] != 'L' || magic[3] != 'F') {
        error(argv[0], argv[1]);
    }

    lseek(fd, 0, SEEK_SET);
    bytes = read(fd, &header, sizeof(header));
    if (bytes != sizeof(header)) {
        error(argv[0], argv[1]);
    }

    printf("Magic:   %.2x %.2x %.2x %.2x\n", magic[0], magic[1], magic[2], magic[3]);
    printf("Class:   %s\n", header.e_ident[EI_CLASS] == ELFCLASS32 ? "ELF32" : "ELF64");
    printf("Data:    %s\n", header.e_ident[EI_DATA] == ELFDATA2LSB ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d %s\n", header.e_ident[EI_VERSION], "(current)");
    printf("OS/ABI:  UNIX - System V\n");
    printf("ABI Version: %d\n", header.e_ident[EI_OSABI]);
    printf("Type:    %s\n", header.e_type == ET_EXEC ? "EXEC (Executable file)" : "Unknown");
    printf("Entry point address:               0x%lx\n", header.e_entry);

    close(fd);
    return (0);
}
