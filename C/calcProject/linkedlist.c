#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

//what we need is for it to function like a queue right now...

list* makeList(){
    list* ptr = (list*)(malloc(sizeof(list)));
    ptr->head = NULL;
    ptr->tail = NULL;

    return ptr;
}

char getHead(list* ptr){
    nodes_t* head = ptr->head;
    if(head == NULL){
        return 0;
    }
    else{
        return head->val;
    }
}

char getTail(list* ptr){
    nodes_t* tail = ptr->tail;
    if(tail == NULL){
        return 0;
    }
    else{
        return tail->val;
    }
}

//do we want to return address of what we inserted? (YES)
nodes_t* insertNode(list* ptr, char val){

    //we want to insert a node within the entire list.
    //my keyboard suddenly decided to start working so this is perfect
    nodes_t* newNode = (nodes_t*)malloc(sizeof(nodes_t));

    newNode->val = val;

    //if the list is empty
    if(ptr->head == NULL && ptr->tail == NULL){
        ptr->head = newNode;
        ptr->head->next = ptr->tail;
        ptr->tail = newNode;
        return newNode;
    }
    //list is NOT empty
    else{
        nodes_t* temp = ptr->head;
        ptr->head = newNode;
        newNode->next = temp;
        return newNode;
        //insert it at the head... continue.
    }
    return 0;
}

char removeHead(list* ptr){
    char returnedValue;
    if(ptr == NULL){
        return 0;
    }
    else{
        nodes_t* head = ptr->head;
        returnedValue = head->val;
        ptr->head = head->next;
        
        free(head);
        return returnedValue;
    }
    return 0;
}


void printList(list* ptr){
    nodes_t* current = ptr->head;
    if(current == NULL){
        printf("NO NODES PRESENT\n");
        return;
    }

    while(current!=NULL){
        printf("NODE: %c\n", current->val);
        current = current->next;
    }
    printf("\n");
}

void destroyList(list* ptr){
    nodes_t* current = ptr->head;
    while(current!=NULL){
        nodes_t* next = current->next;
        free(current);
        current = next;
    }
    free(ptr);
    ptr = NULL;

    printf("pointer: %p\n", ptr);
}

