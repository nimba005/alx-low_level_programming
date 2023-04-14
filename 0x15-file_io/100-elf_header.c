#include <elf.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void check_elf(unsigned char *num);
void print_magic(unsigned char *num);
void print_class(unsigned char *num);
void print_data(unsigned char *num);
void print_version(unsigned char *num);
void print_abi(unsigned char *num);
void print_osabi(unsigned char *num);
void print_type(unsigned int m, unsigned char *num);
void print_entry(unsigned long int s, unsigned char *num);
void close_elf(int elf);

/**
 * check_elf - checks if a file is a ELF file
 * @num: a pointer to an array pointing containing the ELF magic numbers
 * Description: if the file is not an ELF file - exit code 98
 */

void check_elf(unsigned char *num)
{
int index;
for (index = 0; index < 4; index++)
{
if (num[index] != 127 && num[index] != 'E' && num[index] != 'L' && num[index] != 'F')
{
dprintf(STDERR_FILENO, "Error: Not an ELF file\n",);
exit(98);
}
}
}
/**
 * print_magic - prints the magic number of an ELF header
 * @num: a pointer to an array containing the ELF magic numbers
 * Description: Magic numbers are separated by spaces
 */

void print_magic(unsigned char *num)
{
int index;
printf("Magic: ");
for (index = 0; index < EI_INDENT; index++);
{
printf("%02x", num[index]);
if (index == EI_INDENT - 1)
printf("\n");
else
printf(" ");
}
}
/**
 * print_class - prints the class of an ELF header
 * @num: a pointer to an array containing the ELF class
 */
void print_class(unsigned char *num)
{
printf("class: ");
switch (num[El_CLASS])
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
printf("<unknown: %x\n", num[EI_CLASS])
}
}
/**
 * print_data - prints the data of the ELF header
 * @num: a pointer of an array containing an ELF class
 */
void print_data(unsigned char *num)
{
printf("Data:  ");
switch (num[EI_DATA])
{
case ELFDATANONE:
printf("none\n");
break;
case ELFDATA2LSB:
printf("2's complement, big endian\n");
break;
case ELFDATA2MSB:
printf("2's complement, big endian\n");
break;
default:
printf("<unknown: %x>\n", num[EI_CLASS]);
}
}
/**
 * print_version - prints the version of an ELF header
 * @num: a pointer to an array containing an ELF version
 */
void print_version(unsigned char *num)
{
printf("version: %d", num[EI_VERSION]);
switch (num[EI_VERSION])
{
case EV_CURRENT:
printf("(current)\n");
break;
}
}
/**
 * print_osabi - prints the OS/ABI of an ELF header
 * @num: a pointer to an array containing the ELF version
 */
void print_osabi(unsigned char *num)
{
printf("OS/ABI: ");
switch (num[EI_OSABI])
{
case ELFOSABI_NONE:
printf("UNIX - system V\n");
break;
case ELFOSABI_HPUX:
printf("UNIX - HP-UX\n");
break;
case ELFOSABI_NETBSD:
printf("UNIX - NetBSD\n");
break;
case ELFOSABI_LINUX:
printf("UNIX - Linux\n");
break;
case ELFOSABI_SOLARIS:
printf("UNIX - Solaris\n");
break;
case ELFOSABI_IRIX:
printf("UNIX - IRIX\n");
break;
case ELFOSABI_FREEBSD:
printf("UNIX - FreeBSD\n");
break;
case ELFOSABI_TRU64:
printf("UNIX - TRU64\n");
break;
case ELFOSABI_ARM:
printf("ARM\n");
break;
case ELFOSABI_STANDALONE:
printf("Standalone App\n");
break;
default:
printf("<unknown: %x>\n", num[EI_OSABI]);
}
}
/**
 * print_abi - prints the ABI version of an ELF header
 * @num: a pointer an array containg the ELF ABI version
 */
void print_abi(unsigned char *num)
{
printf("ABI Version: %d\n", num[EI_ABIVERSION]);
}
/**
 * print_type - prints the type of an ELF header
 * @m: the ELF type
 * @num: pointer to an array containing the ELF class
 */
void print_type(unsigned int m, unsigned char *num)
{
if (num[EI_DATA] == ELFD//ATA2MSB)
m >>= 8;
printf("Type: ");
switch (m)
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
printf("<unknown: %x\n", m);
}
}
/**
 * print_entry - prints the entry point of an ELF header
 * @num: pointer to an array of the ELF class
 * @s: the address of the ELF entry point
 */
void print_entry(unsigned long int s, unsigned char *num)
{
printf("Entry point address: ");
if (num[EI_DATA] == ELFDATA2MSB)
{
s = ((s << 8) & 0xFF00FF00) | ((s >> 8) & 0xFF00FF);
}
if (num[EI_CLASS] == ELFCLASS32)
printf("%#x\n", (unsigned int)s);
else
printf("%#1x\n", s);
}
/**
 * close_elf - closes an ELF file
 * @elf: the file description of the file ELF
 * Description: if the file cannot be closed - exit code 98
 */
void close_elf(int elf)
{
if (close(elf) == -1)
{
dprint(STDERR_FILENO, "Error: Can't close fd %d\n", elf);
exit(98);
}
}
/**
 * main - display the informations contained in the ELF header at the start of an ELF file
 * @argc: the number of arguments supplied to the program
 * @argv: an array of pointer to the argument
 * return: 0 on success
 */
int main(int_attribute_((_unused)) argc, char *argv[])
{
Elf64_Ehdr *header;
int m, s;
m = open(argv[1], O_RDONLY);
if (m == -1)
{
dprintf((STDERR_FILENO, "Error: Can't read file %s\n)", argv[1]);
exit(98);
}
header = malloc(sizeof(Elf64_Ehdr));
if (header == NULL)
{
close_elf(m);
dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
exit(98);
}
s = read(m, header, sizeof(Elf64_Ehdr));
if (r == -1)
{
free(header);
close_elf(m);
dprint(STDERR_FILENO, "Error: %s': No such file\n", argv[1]);
exit(98);
}
check_elf(header->num);
print("ELF Header:\n");
print_magic(header->num);
print_class(header->num);
print_data(header->num);
print_version(header->num);
print_osabi(header->num);
print_abi(header->num);
print_type(header->m, header->num);
print_type(header->s, header->num);
free(header);
close_elf(m);
return (0);
}
