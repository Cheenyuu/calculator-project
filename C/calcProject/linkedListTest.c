#include <stdio.h>
#include "linkedlist.h"

//testing of the functions within "linkedList"

int main(){

    //gcc linkedListTest.c linkedlist.c -o linkedListTest
    //./linkedListTest

    //testing creation
    list* newList = makeList();
    
    //testing created list 1)
    insertNode(newList, 'A');
    insertNode(newList, 'B');
    insertNode(newList, 'C');
    printList(newList);
    if(newList->head == NULL){
        printf("FAILED TEST: 1\n");
        return 0;
    }

    //testing remove...(2)
    removeHead(newList);
    printList(newList);
    removeHead(newList);
    printList(newList);
    removeHead(newList);
    printList(newList);
    if(newList->head != NULL){
        printf("FAILED TEST: 2\n");
        return 0;
    }


    //test insert after... (3)
    insertNode(newList, 'A');
    insertNode(newList, 'B');
    insertNode(newList, 'C');
    if(newList->head == NULL){
        printf("FAILED TEST: 3\n");
        return 0;
    }

    //test destroy... (4)
    destroyList(newList);
    if(newList!=NULL){
        printf("FAILED TEST: 4\n");
        return 0;
    }
    //failed test 4... why?


    return 0;
}
