#C - 0x15-file_io
#main.h - contains all the header files
0-read_textfile.c - C function that reads a text file and prints it to the POSIX standard output and returns the actual number of letters it could print and read and o if file name is NULL
1-create_file.c - C function that creates a file and returns 1 on success, -1 on failure. created file must have those permissions: rw-------. If the file already exists, do not change the permissions and truncate it
2-append_text_to_file.c - C function that appends text at the end of the a file, return 1 on success and  -1 on failure
3-cp.c - C program that copies the content of a file to another file, under conditions: if the number of argument is not the correct one, exit with code 97 and print Usage: cp file_from file_to, followed by a new line, on the POSIX standard error
if file_to already exists, truncate it
if file_from does not exist, or if you can not read it, exit with code 98 and print Error: Can't read from file NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
where NAME_OF_THE_FILE is the first argument passed to your program
if you can not create or if write to file_to fails, exit with code 99 and print Error: Can't write to NAME_OF_THE_FILE, followed by a new line, on the POSIX standard error
where NAME_OF_THE_FILE is the second argument passed to your program
if you can not close a file descriptor , exit with code 100 and print Error: Can't close fd FD_VALUE, followed by a new line, on the POSIX standard error
where FD_VALUE is the value of the file descriptor
Permissions of the created file: rw-rw-r--. If the file already exists, do not change the permissions
You must read 1,024 bytes at a time from the file_from to make less system calls. Use a buffer
100-elf_header.c - C program that displays the information contained in the ELF header at the start of an ELF file, If the file is not an ELF file, or on error, exit with status code 98 and display a comprehensive error message to stderr
#end
