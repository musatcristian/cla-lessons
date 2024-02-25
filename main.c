#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "my_header.h"
#include "structs.h"
#include "macro_log.h"

// int __SIZE__ = 10;

int main(void)
{
    int values[__SIZE__] = {2, 4, 5, 6, 7, 8, 9, 1, 3, 0};

    // struct Element *ptrEl = (struct Element *)malloc(sizeof(struct Element));
    // struct Element *start = ptrEl;

    // for (int i = 0; i < __SIZE__; ++i)
    // {
    //     ptrEl->value = values[i];
    //     ptrEl->next = (struct Element *)malloc(sizeof(struct Element));
    //     ptrEl = i < (__SIZE__ - 1) ? ptrEl->next : NULL;
    // }

    // print_n_values(5, start);
    // // print_n_values(2, start);

    // // free(start);
    // free_list(start);
    // printf("\tstart este %p\n", *start);
    // printf("\tintiial este %p\n", ptrEl);

    struct Element *curr = NULL;
    struct Element *prev;
    struct Element *start = (struct Element *)malloc(sizeof(struct Element));

    // curr = NULL;
    prev = start;

    for (int i = 0; i < 5; ++i)
    {
        curr = (struct Element *)malloc(sizeof(struct Element));
        prev->value = values[i];
        prev->next = curr;

        prev = curr;
    }

    // curr = start;
    // while (curr) {

    // }
    printf("%d", start->next->value);

    return 0;
};
