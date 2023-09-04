#ifndef MAIN_H
#define MAIN_H

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

/* Function to read a text file and print its contents to stdout */
ssize_t read_textfile(const char *filename, size_t letters);

/* Function to create a new file with the given text content */
int create_file(const char *filename, char *text_content);

/* Function to append text content to an existing file */
int append_text_to_file(const char *filename, char *text_content);

#endif

