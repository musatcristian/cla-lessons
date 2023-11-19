#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>
#include "structs.h"

int main(void)
{
    struct House house1;
    struct House house2;
    struct House house3;
    struct House house4;
    house1.houseNumber = 1;
    house2.houseNumber = 3;
    house3.houseNumber = 5;
    house4.houseNumber = 7;
    house1.next = &house2;
    house2.next = &house3;
    house3.next = &house4;
    house4.next = NULL;
    house1.previous = NULL;
    house2.previous = &house1;
    house3.previous = &house2;
    house4.previous = &house3;
    struct House *firstHouse = &house1;
    struct House *lastHouse = &house4;
    struct House *current;
    /* your code */
    puts("Ascending order");
    for (current = firstHouse; current; current = current->next)
    {
        printf("\tHouse number is: %d \n", current->houseNumber);
    }

    puts("\nDescending order");
    for (current = lastHouse; current; current = current->previous)
    {
        printf("\tHouse number is: %d \n", current->houseNumber);
    }

    return 0;
}
