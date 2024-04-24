#include <stdio.h>
#include <stdlib.h>
#include "basic.h"

/*
There are 4 Storage Classes in C
1. auto -- it is by default
If variable is declared by not defined it has a default garbage value.
eg: auto int age = 23;

2. external
Global variables are known as external variables since they have a global scope.
eg: int age = 23;

3. extern
If variable is declared and defined in another file and is to be imported in current file, this keyword is used.
eg: extern int age = 23;

4. static
Variables declared inside a function with keyword static can be accessed from outside the function as well.
eg: static int age = 23;

5. register

eg: register int age = 23;

*/

// This is an External / Global Variable
int sampleAge = 20;

// These are External Variables
extern int externalAge;
extern char grade;

int returnAge (int age) {
    static int updatedAge = 50;
    // Here int age is a local variable
    return age;
}

int main () {
    int testVar = returnAge(30);
    printf("%d \n", testVar);
    printf("%d \n", sampleAge);
    
    printf("%d \n", externalAge);
    printf("%c \n", grade);
    return 0;
}