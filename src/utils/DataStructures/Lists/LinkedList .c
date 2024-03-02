#include "LinkedList.h"

struct Node_int *iterate(int index, struct LinkedList_int *linked_list);
struct Node_int *create_node_int(int data);
void destroy_node_int(struct Node_int *node_to_destroy);
void insert_node_int(int index, int data, struct LinkedList_int *linked_list);
void remove_node_int(int index, struct LinkedList_int *linked_list);
int retrieve_data_int(int index, struct LinkedList_int *linked_list);

struct LinkedList_int linked_list_int_constructor()
{
    struct LinkedList_int new_list;
    new_list.head = NULL;
    new_list.length = 0;
    new_list.insert = insert_node_int;
    new_list.remove = remove_node_int;
    new_list.retrieve = retrieve_data_int;
    new_list.contructor = linked_list_int_constructor;

    return new_list;
}

struct Node_int *create_node_int(int data)
{
    struct Node_int *new_node_address = (struct Node_int *)malloc(sizeof(struct Node_int));
    struct Node_int new_node_instance;
    new_node_instance.data = data;
    new_node_instance.next = NULL;

    *new_node_address = new_node_instance;

    return new_node_address;
}