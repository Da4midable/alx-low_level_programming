#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>



int i;

void display_elf_header(const char *filename) {
    int fd;
    Elf64_Ehdr header;

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        dprintf(2, "Error: Could not open file '%s'\n", filename);
        exit(98);
    }

    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        dprintf(2, "Error: Could not read ELF header from file '%s'\n", filename);
        close(fd);
        exit(98);
    }

    if (header.e_ident[EI_MAG0] != ELFMAG0 || 
        header.e_ident[EI_MAG1] != ELFMAG1 ||
        header.e_ident[EI_MAG2] != ELFMAG2 ||
        header.e_ident[EI_MAG3] != ELFMAG3) {
        dprintf(2, "Error: '%s' is not an ELF file\n", filename);
        close(fd);
        exit(98);
    }

    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             %s\n", header.e_ident[EI_CLASS] == ELFCLASS64 ? "ELF64" : "ELF32");
    printf("  Data:                              %s\n", header.e_ident[EI_DATA] == ELFDATA2MSB ? "2's complement, big endian" : "2's complement, little endian");
    printf("  Version:                           %d (current)\n", header.e_ident[EI_VERSION]);
    printf("  OS/ABI:                            ");
    switch (header.e_ident[EI_OSABI]) {
        case ELFOSABI_SYSV:    printf("UNIX - System V\n"); break;
        case ELFOSABI_HPUX:    printf("UNIX - HP-UX\n"); break;
        case ELFOSABI_NETBSD:  printf("UNIX - NetBSD\n"); break;
        case ELFOSABI_LINUX:   printf("UNIX - Linux\n"); break;
        case ELFOSABI_SOLARIS: printf("UNIX - Solaris\n"); break;
        case ELFOSABI_IRIX:    printf("UNIX - IRIX\n"); break;
        case ELFOSABI_FREEBSD: printf("UNIX - FreeBSD\n"); break;
        case ELFOSABI_TRU64:   printf("UNIX - TRU64\n"); break;
        case ELFOSABI_ARM:     printf("ARM\n"); break;
        case ELFOSABI_STANDALONE: printf("Standalone App\n"); break;
        default: printf("<unknown: %x>\n", header.e_ident[EI_OSABI]);
    }
    printf("  ABI Version:                       %d\n", header.e_ident[EI_ABIVERSION]);
    printf("  Type:                              %s\n", header.e_type == ET_REL ? "REL (Relocatable file)" : (header.e_type == ET_EXEC ? "EXEC (Executable file)" : "DYN (Shared object file)"));
    printf("  Entry point address:               %#lx\n", (unsigned long)header.e_entry);

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        dprintf(2, "Usage: %s elf_filename\n", argv[0]);
        return 98;
    }

    display_elf_header(argv[1]);
    return 0;
}
