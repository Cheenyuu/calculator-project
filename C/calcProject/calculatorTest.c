#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "basicCalculator.h"
#define MAX_LENGTH 100

//gcc -o calculator calculatorTest.c basicCalculator.c linkedList.c 

int main(){
    char equation[MAX_LENGTH];
    getEq(equation);
    Calculator(equation);
    return 0;
}


