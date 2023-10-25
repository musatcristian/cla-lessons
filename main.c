#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "arguments_utils.h"
#include "ip_utils.h"
#include "my_header.h"
#include "macro_log.h"
#include "triangles.h"

#define CIT(X) #X
#define CNC(X, Y, Z) X##Y##Z
#define VAL 641221
#define ALPHA(x, y) x##2 - y

int vr = 10;

int fun1(int param)
{
    static int vr = 1;
    vr++;
    return vr + param;
}

int main(int argc, char *argv[])
{
    // add -S flag by hand
    // int size = 0;
    // scanf("%d", &size);
    // SNAP_VAR(size);
    // SNAP(printTriangles);
    // printTriangles(size);
    // SNAP(printNumbers);
    // printNumbers(size);

    // printIPValid("127.0.0.1");
    // printIPValid("127.0.01");
    // printIPValid("127.0..1");
    // printIPValid("127.zero.0.1");
    // printIPValid("127.297.0.1");
    // printIPValid("127.2555.0.1");

    // int i = CNC(64, 12, 21);
    // int j = i + VAL;
    // char *s = CIT(i);

    // puts("");
    // printf("%d%s", j, s);
    // puts("");

    // int i = 1000000;
    // int i2 = -2;

    // printf("%d", ALPHA(i, i2));
    // puts("");

    char x[20] = "123";
    printf("%d\n\n\n\n\n", 10 - '8' + '1');
    return 0;
}
