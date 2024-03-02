#ifndef LinkedList_h
#define LinkedList_h

#include <stdlib.h>
#include "Node.h"

struct LinkedList_int
{
  /* data */
  int length;
  struct Node_int *head;
  void (*insert)(int index, int data, struct LinkedList_int *linked_list);
  void (*remove)(int index, struct LinkedList_int *linked_list);
  void (*retrieve)(int index, struct LinkedList_int *linked_list);
  struct LinkedList_int (*contructor)(void);
};

struct LinkedList_int linked_list_int_constructor();

#endif