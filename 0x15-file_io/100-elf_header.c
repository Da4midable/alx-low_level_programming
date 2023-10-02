#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

#define EI_NIDENT 16

typedef struct {
    unsigned char e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_elf_header_info(const Elf64_Ehdr *elf_header);

int main(int argc, char *argv[]) {
    int fd;
	ssize_t bytes_read;
    Elf64_Ehdr elf_header;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error");
        return 98;
    }

    bytes_read = read(fd, &elf_header, sizeof(Elf64_Ehdr));
    if (bytes_read != sizeof(Elf64_Ehdr) || elf_header.e_ident[0] != 0x7F || elf_header.e_ident[1] != 'E' || elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F') {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        return 98;
    }

    print_elf_header_info(&elf_header);

    close(fd);
    return 0;
}

void print_elf_header_info(const Elf64_Ehdr *elf_header) {
	int i;

	printf("Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", elf_header->e_ident[i]);
    }
    printf("\nClass:   %s\n", elf_header->e_ident[4] == 1 ? "ELF32" : "ELF64");
    printf("Data:    %s\n", elf_header->e_ident[5] == 1 ? "2's complement, little endian" : "2's complement, big endian");
    printf("Version: %d (current)\n", elf_header->e_ident[6]);
    printf("OS/ABI:  %d\n", elf_header->e_ident[7]);
    printf("ABI Version: %d\n", elf_header->e_ident[8]);
    printf("Type:    %d\n", elf_header->e_type);
    printf("Entry point address: %lx\n", elf_header->e_entry);
}
