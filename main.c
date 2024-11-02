#include <stdio.h>
void print(int a[])
{
    int i;
    for (i = 0; i < 5; i++)
        printf("%d ", a[i]);
    printf("\n");
};

void mul2(int *arrptr)
{
    int i;
    for (i = 0; i < 5; i++)
        arrptr[i] *= 2;
};

int mystrlen(char *str)
{
    int counter = 0;

    while (*str != '\0')
    {
        counter++;
        str++;
    }
    return counter;
};

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};

    print(arr);
    mul2(arr);
    print(arr);
    return 0;
}