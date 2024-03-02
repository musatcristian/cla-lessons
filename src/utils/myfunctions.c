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

extern void mystrcat(char *destination, char *source, int destination_size)
{

    for (destination += destination_size; *destination++ = *source++;)
        ;
    // return destination;
}

extern void print_struct(struct Person pers)
{
    printf("The full name is : %s %s\n", pers.fname, pers.lname);
}

extern void print_n_values(int n, struct Element *itemPtr)
{
    struct Element *nextPtr = itemPtr;
    int counter = 0;

    printf("\tFirst %d values\n", n);
    while (counter < n && nextPtr->next)
    {
        printf("\t Value is: %d \n", nextPtr->value);
        nextPtr = nextPtr->next;
        counter++;
    };
}

void free_list(struct Element *ptrEl)
{
    struct Element *nextPtr = NULL;
    struct Element *f = ptrEl;
    while (f)
    {
        printf("\t Prt is: %p \n", f->next);
        nextPtr = f->next;
        free(f);
        f = nextPtr;
    };

    printf("f este %p\n", f);
}
