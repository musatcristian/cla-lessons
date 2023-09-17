#include <stdio.h>

#ifndef ARGUMENTS_UTILS_H
#define ARGUMENTS_UTILS_H

// Function declaration (prototype)
FILE *checkArgv(char **argv, FILE *inp);
void printArgvs(char **argv);
FILE *readAsBytes(char **argv, FILE *inp);

#endif
