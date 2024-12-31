#ifndef LINKEDLIST_H
#define LINKEDLIST_H

typedef struct nodes{
    struct nodes* prev;
    struct nodes* next;
    char val;
}nodes_t;

typedef struct{
    nodes_t* head;
    nodes_t* tail;
} list;


list* makeList();

char getHead(list* ptr);

char getTail(list* ptr);

char removeHead(list* ptr);

nodes_t* insertNode(list* ptr, char val);

void printList(list* ptr);

void destroyList(list* ptr);

#endif