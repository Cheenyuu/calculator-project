//today I'm going to try to write a calculator.
//I should work with pointers as much as I can...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "linkedlist.h"

#define MAX_LENGTH 100

//we want to get an input...

void getEq(char *eqString){
    fgets(eqString, MAX_LENGTH, stdin);
}

//helper function to remove spaces...
void removeSpaces(char* str){
    int i = 0, j = 0;
    while(str[i]){
        //if character is not a space, then just copy it to a position...
        if(str[i] != ' '){
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0'; //null terminator to get rid of anything after j...
}

//we're passing in a pointer to the equation...
//it's pointing to the beginning of the array
int Calculator(char *equation){
    //how we want this to work... we need to take the equation and
    //set priority based on the PEMDAS

    //I need to remove spaces from the list...
    removeSpaces(equation);
    list* newList = makeList();

    //do we want to chunk it by threes?

    for(int i = 0; i < strlen(equation); i++){
        insertNode(newList, equation[i]);
    }

    printList(newList);
    return 0;
}

