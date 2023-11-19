#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "my_header.h"
#include "structs.h"

int main(int argc, char *argv[])
{
    struct Person mary, james, pat, john;

    strcpy(mary.fname, "Mary");
    strcpy(mary.lname, "Smith");
    strcpy(james.fname, "James");
    strcpy(james.lname, "Johnson");
    strcpy(pat.fname, "Patricia");
    strcpy(pat.lname, "Williams");
    strcpy(john.fname, "John");
    strcpy(john.lname, "Brown");

    print_struct(mary);
    print_struct(pat);
    print_struct(james);
    print_struct(john);

    return 0;
}
