#ifndef MAIN_H
#define MAIN_H
#include <stdlib.h>

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int _strlen(char *str);
int append_text_to_file(const char *filename, char *text_content);
void check_file(int fdes1, int fdes2);
void print_magic(header.e_ident);
void print_class(header.e_ident);
void print_data(header.e_ident);
void print_version(header.e_ident);
void print_os(header.e_ident);
void print_type(header.e_type);
void print_entry(header.e_entry);

#endif
