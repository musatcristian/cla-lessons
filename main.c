#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <errno.h>

#include "arguments_utils.h"
#include "ip_utils.h"
#include "my_header.h"
#include "macro_log.h"
#include "triangles.h"

int main(int argc, char *argv[])
{
    // int size = 0;
    // scanf("%d", &size);
    // SNAP_VAR(size);
    // SNAP(printTriangles);
    // printTriangles(size);
    // SNAP(printNumbers);
    // printNumbers(size);

    printIPValid("127.0.0.1");
    printIPValid("127.0.01");
    printIPValid("127.0..1");
    printIPValid("127.zero.0.1");
    printIPValid("127.297.0.1");
    printIPValid("127.2555.0.1");

    return 0;
}
