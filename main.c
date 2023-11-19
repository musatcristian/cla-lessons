#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "my_header.h"
#include "structs.h"

int main(void)
{
    int values[10] = {2, 4, 5, 6, 7, 8, 9, 1, 3, 0};

    struct Element *list;

    list = malloc(sizeof(struct Element) * 19);

    for (int i = 0; i < 10; i++)
    {
        list[i].value = values[i];
        list[i].next = &(list[i + 1]);
    };

    print_n_values(5, list);
    print_n_values(7, list);

    free(list);
    return 0;
};
