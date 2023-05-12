#include "main.h"

/**
 * print_error - prints error message.
 * @msg: pointer to a string.
 */
void print_error(char *msg)
{
	fprintf(stderr, "Error: %s\n", msg);
	exit(98);
}
/**
 * print_magic - for printing magic
 * @magic: ...
 */
void print_magic(unsigned char *magic)
{
	int i;

	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", magic[i]);
	printf("\n");
}
/**
 * print_class - for printing the class.
 * @elf_class: ...
 */
void print_class(unsigned char elf_class)
{
	printf("  Class:                             ");
	switch (elf_class)
	{
		case ELFCLASSNONE:
			printf("none\n");
			break;
		case ELFCLASS32:
			printf("ELF32\n");
			break;
		case ELFCLASS64:
			printf("ELF64\n");
			break;
		default:
			printf("<unknown>\n");
	}
}
/**
 * print_data - prints data
 * elf_data: ...
 */
void print_data(unsigned char elf_data)
{
	printf("  Data:                              ");
	switch (elf_data)
	{
		case ELFDATANONE:
			printf("none\n");
			break;
		case ELFDATA2LSB:
			printf("2's complement, little endian\n");
			break;
		case ELFDATA2MSB:
			printf("2's complement, big endian\n");
			break;
		default:
			printf("<unknown>\n");
	}
}
/**
 * print_version - prints version.
 * @elf_version: ...
 */
void print_version(unsigned char elf_version)
{
	printf("  Version:                           ");
	switch (elf_version)
	{
		case EV_NONE:
			printf("none\n");
			break;
		case EV_CURRENT:
			printf("1 (current)\n");
			break;
		default:
			printf("<unknown>\n");
	}
}
/**
 * print_osabi - prints os/abi
 * @osabi: ...
 */
void print_osabi(unsigned char osabi)
{
	printf("  OS/ABI:                            ");
	switch (osabi)
	{
		case ELFOSABI_SYSV:
			printf("UNIX - System V\n");
			break;
		case ELFOSABI_LINUX:
			printf("UNIX - Linux\n");
			break;
		case ELFOSABI_NETBSD:
			printf("UNIX - NetBSD\n");
			break;
		default:
			printf("<unknown>\n");
	}
}

/**
 * print_abiversion - prints the abi.
 * @abiversion: ...
 */
void print_abiversion(unsigned char abiversion)
{
	printf("  ABI Version:                       %d\n",
			abiversion);
}
/**
 * print_type - prints the type
 * @type: ...
 */
void print_type(unsigned short type)
{
	printf("  Type:                              ");
	switch (type)
	{
		case ET_NONE:
			printf("NONE (None)\n");
			break;
		case ET_REL:
			printf("REL (Relocatable file)\n");
			break;
		case ET_EXEC:
			printf("EXEC (Executable file)\n");
			break;
		case ET_DYN:
			printf("DYN (Shared object file)\n");
			break;
		case ET_CORE:
			printf("CORE (Core file)\n");
			break;
		default:
			printf("<unknown>\n");
	}
}
/**
 * print_entry - prints entry.
 * @entry: ...
 */
void print_entry(Elf64_Addr entry)
{
	printf("  Entry point address:               0x%lx\n",
			entry);
}
/**
 * print_elf_header - prints ...
 * @ehdr: ...
*/
void print_elf_header(Elf64_Ehdr *ehdr)
{
	print_magic(ehdr->e_ident);
	print_class(ehdr->e_ident[EI_CLASS]);
	print_data(ehdr->e_ident[EI_DATA]);
	print_version(ehdr->e_ident[EI_VERSION]);
	print_osabi(ehdr->e_ident[EI_OSABI]);
	print_abiversion(ehdr->e_ident[EI_ABIVERSION]);
	print_type(ehdr->e_type);
	print_entry(ehdr->e_entry);
}
/**
 * main - entry point
 * @argc: ...
 * @argv: ...
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	char *filename = argv[1];
	int fd = open(filename, O_RDONLY);
	Elf64_Ehdr ehdr;
	ssize_t n = read(fd, &ehdr, sizeof(ehdr));

	if (argc < 2)
	{
		print_error("No file specified");
	}
	if (fd < 0)
	{
		print_error("Could not open file");
	}

	if (n < 0)
	{
		print_error("Could not read ELF header");
	}

	if (memcmp(ehdr.e_ident, ELFMAG, SELFMAG) != 0)
	{
		print_error("Not an ELF file");
	}

	print_elf_header(&ehdr);

	close(fd);
	return (0);
}
