#include <stdio.h>
typedef struct nodes{
    struct nodes* prev;
    struct nodes* next;
    char val;
}nodes_t;

typedef struct{
    nodes_t* head;
    nodes_t* tail;
} list;

char getHead(list* ptr);

void getTail(list* ptr);

nodes_t* insertNode(list* ptr, char val);

