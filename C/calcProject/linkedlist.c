#include "linkedlist.h"
#include <stdio.h>
#include <stdlib.h>

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

void getTail(list* ptr){
    nodes_t* tail = ptr->tail;
    if(tail == NULL){
        return 0;
    }
    else{
        return head->val;
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

void printList(list* ptr){
    nodes_t* current = ptr->head;
    while(current!=NULL){
        printf("NODE: %c\n", current->val);
        current = current->next;
    }
}



int main(){
    list* newList = makeList();
    //printf("%p\n", newList);
    insertNode(newList, '3');
    printf("%c\n\n", getHead(newList));
    insertNode(newList, '4');
    insertNode(newList, '5');
    printf("%c\n\n", getHead(newList));
    printList(newList);
    return 0;
}

