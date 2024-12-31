//today I'm going to try to write a calculator.
//I should work with pointers as much as I can...

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_LENGTH 100

//we want to get an input...

void getEq(char *eqString){
    fgets(eqString, MAX_LENGTH, stdin);
}

void tokenize(const char *equation){
    char *token;
    char input[MAX_LENGTH];

    token = strtok(input, " ");
    while(token!=NULL){
        printf("Token: %s\n", token);
        token = strtok(NULL, " ");
    }
}

int basicCalculator(const char *equation){
    char *token;
    char input[MAX_LENGTH];
    
    int total = 0;
    char prevToken;

    strncpy(input, equation, MAX_LENGTH);

    token = strtok(input, " ");


    while(token!=NULL){
        if(strcmp(token, "+")!=0&&strcmp(token, "-")!=0){
            //seperate out the numbers...
            int num = atoi(token);
            if(prevToken == '+'){
                total = total + num;
            }
            else if(prevToken == '-'){
                total = total - num;
            }
            else{
                total = num;
            }


        }
        else{
            prevToken = *token;
        }
        token = strtok(NULL, " ");
    }


    return total;
}

int main(){
    char equation[MAX_LENGTH]; //max of 100
    getEq(equation);
    int value = basicCalculator(equation);
    printf("%d", value);
    return 0;
}

