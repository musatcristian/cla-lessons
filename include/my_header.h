#ifndef MY_HEADER_H
#define MY_HEADER_H

#include "structs.h"

// Function declaration (prototype)
int printMessage(const char *message, int argc);

void mystrcat(char *destination, char *source, int destination_size);

void print_struct(struct Person pers);

#endif
