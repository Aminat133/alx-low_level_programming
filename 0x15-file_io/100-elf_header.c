#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <string.h>
#include <stdint.h>

/**
 * struct struct - structure 
 * uint16_t 
    uint16_t
    uint32_t 
    uint32_t
    uint32_t
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
 * Description: data structure for dog
 */
typedef struct {
    unsigned char e_ident[16];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint32_t e_entry;
    uint32_t e_phoff;
    uint32_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf32_Ehdr;



/**
 * print_elf_header_info - prints the information in the header.
 * @header: header pointer
 * Return: nothing.
 */
void print_elf_header(const Elf32_Ehdr *header) {
    printf("Magic:   ");
    for (int i = 0; i < 16; i++) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\nClass:   %d-bit\n", header->e_ident[4] == 1 ? 32 : 64);
    printf("Data:    %s\n", header->e_ident[5] == 1 ? "2's complement, little-endian" : "Unknown");
    printf("Version: %d (current)\n", header->e_ident[6]);
    printf("OS/ABI:  %d\n", header->e_ident[7]);
    printf("ABI Version: %d\n", header->e_ident[8]);
    printf("Type:    %d\n", header->e_type);
    printf("Entry point address: 0x%x\n", header->e_entry);
}



/**
 * main - The entry point for the program to get the 
 * header of the ELF file
 * @argc: The number of arguments
 * @argv: The pointer to an array of arguments
 * Return: 1 on success, error code on failure
 */
int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    const char *filename = argv[1];
    int fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror("open");
        exit(98);
    }

    Elf32_Ehdr header;
    ssize_t bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read != sizeof(header)) {
        fprintf(stderr, "Error: Cannot read ELF header\n");
        close(fd);
        exit(98);
    }

    // Check for ELF magic number
    if (memcmp(header.e_ident, "\x7F\x45\x4C\x46", 4) != 0) {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    // Display ELF header information
    print_elf_header(&header);

    close(fd);
    return 0;
}
