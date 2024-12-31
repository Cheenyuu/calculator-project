#include <stdio.h>
#include "linkedlist.h"

//testing of the functions within "linkedList"

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
