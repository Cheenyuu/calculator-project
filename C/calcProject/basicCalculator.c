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

//we're passing in a pointer to the equation...
//it's pointing to the beginning of the array
int Calculator(const char *equation){
    //how we want this to work... we need to take the equation and
    //set priority based on the PEMDAS


    for(int i = 0; i < strlen(equation); i++){
        printf("%c\n", equation[i]);
    }

    return 0;
}

