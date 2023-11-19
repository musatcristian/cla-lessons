#ifndef MY_HEADER_H
#define MY_HEADER_H

#include "structs.h"

// Function declaration (prototype)
int printMessage(const char *message, int argc);

void mystrcat(char *destination, char *source, int destination_size);

void print_struct(struct Person pers);

void print_n_values(int n, struct Element *list);

#endif
