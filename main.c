#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "my_header.h"

int main(int argc, char *argv[])
{
    char input[6];
    char dest[10] = "UGUG";

    puts("Enter a five letter word");
    scanf("%5s", input);

    mystrcat(dest, input);

    printf("Whole string is :\n %s\n", dest);

    return 0;
}
