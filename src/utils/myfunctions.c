#include <stdio.h>
#include <stdlib.h>
#include "my_header.h"

extern int printMessage(const char *message, int argc)
{
    if (argc != 2)
    {
        printf("usage: show file_name\n");
        return 1;
    }
    printf("The file name is: %s\n", message);
    return 0;
}

extern FILE *checkArgv(char **argv, FILE *inp)
{

    if ((inp = fopen(argv[1], "rt")) == NULL)
    {
        printf("Cannot open the file %s\n", argv[1]);
        // return inp;
    }

    return inp;
}

extern FILE *readAsBytes(char **argv, FILE *inp)
{
    if ((inp = fopen(argv[1], "rb")) == NULL)
    {
        printf("Cannot open the file %s\n", argv[1]);
        // return inp;
    }

    return inp;
}

void printArgvs(char **argv)
{
    for (int i = 0; i < 2; i++)
    {
        printf("\t%s\n", argv[i]);
    }
}
