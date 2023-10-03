#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <elf.h>

/**
 * print_elf_header_info - prints the information in the header.
 * @header: header pointer
 * Return: nothing.
 */

void print_elf_header_info(Elf64_Ehdr *header) {
	printf("Magic: ");
	for (int i = 0; i < EI_NIDENT; i++) {
		printf("%02x ", header->e_ident[i]);
	}
	printf("\n");

	printf("Class: %d-bit\n", (header->e_ident[EI_CLASS] == ELFCLASS32) ? 32 : 64);

	printf("Data: %s\n", (header->e_ident[EI_DATA] == ELFDATA2LSB) ? "2's complement, little endian" : "2's complement, big endian");

	printf("Version: %d\n", header->e_ident[EI_VERSION]);

	printf("OS/ABI: %s\n", (header->e_ident[EI_OSABI] == ELFOSABI_SYSV) ? "UNIX - System V" : "Other");

	printf("ABI Version: %d\n", header->e_ident[EI_ABIVERSION]);

	printf("Type: %s\n", (header->e_type == ET_EXEC) ? "Executable" : (header->e_type == ET_DYN) ? "Shared Object" : "Other");

	printf("Entry point address: 0x%lx\n", header->e_entry);
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
		return 1;
	}

	const char *elf_filename = argv[1];
	int fd = open(elf_filename, O_RDONLY);
	if (fd == -1) {
		perror("Error opening file");
		return 98;
	}

	Elf64_Ehdr header;
	if (read(fd, &header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr)) {
		fprintf(stderr, "Error reading ELF header\n");
		close(fd);
		return 98;
	}

	if (header.e_ident[EI_MAG0] != ELFMAG0 || header.e_ident[EI_MAG1] != ELFMAG1 ||
		header.e_ident[EI_MAG2] != ELFMAG2 || header.e_ident[EI_MAG3] != ELFMAG3) {
		fprintf(stderr, "Not an ELF file\n");
		close(fd);
		return 98;
	}

	print_elf_header_info(&header);

	close(fd);
	return 0;
}
