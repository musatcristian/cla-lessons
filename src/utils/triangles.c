#include <stdio.h>
#include "triangles.h"

void printTriangles(int size)
{
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            printf("\\ ");
        }
        printf("\n");
    }
};

void printNumbers(int size)
{
    int counter = 0;
    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            if (i == 0)
            {
                printf("%3d", 1);
                break;
            }
            printf("%3d", i + j + counter);
        }
        counter++;
        printf("\n");
    }
}
