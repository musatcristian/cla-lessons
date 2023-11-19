#ifndef STRUCTS_H

#define STRUCTS_H
struct Person
{
    char fname[50];
    char lname[50];
};

struct House
{
    int houseNumber;
    struct House *previous;
    struct House *next;
};

struct Element
{
    int value;
    struct Element *next;
};
#endif
