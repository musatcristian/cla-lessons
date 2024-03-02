
#ifndef MACRO_LOG_H
#define MACRO_LOG_H
// #include <stdio.h>
#define SNAP(F) printf("In line %3d, file path " __FILE__ ", before the %s function \n", __LINE__, #F)
#define SNAP_VAR(V) printf("Var \" " #V " \" at line %d has value %d\n", __LINE__, V)
#define CONCATENATE(x, y) x##y
#define __SIZE__ 10
#endif
