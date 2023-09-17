#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "ip_utils.h"

int checkIP(char *address)
{
    int result = 1;
    int i;
    int actualCount = 0;
    int partsCount = 1;
    char actualPart[5];

    for (i = 0; i < strlen(address); i++)
    {
        char c = address[i];
        if (c >= MIN_NUM && c <= MAX_NUM || c == SEPARATOR)
        {
            if (c == SEPARATOR)
            {
                if (actualCount < 1)
                {
                    result = 0;
                    break;
                }
                partsCount++;
                if (partsCount > 4)
                {
                    result = 0;
                    break;
                }
                actualPart[actualCount] = NULL_CHAR;
                int partValue = atoi(actualPart);
                if (partValue > UPPER_BOUND || partValue < LOWER_BOUND)
                {
                    result = 0;
                    break;
                }
                actualCount = 0;
            }
            else
            {
                if (actualCount < 3)
                {
                    actualPart[actualCount] = c;
                    actualCount++;
                }
                else
                {
                    result = 0;
                    break;
                }
            }
        }
        else
        {
            result = 0;
            break;
        }
    }
    if (partsCount != 4)
        result = 0;
    return result;
}

void printIPValid(char *address)
{
    if (checkIP(address))
        printf("%s is a valid IP address\n", address);
    else
        printf("%s is not a valid IP address\n", address);
}
