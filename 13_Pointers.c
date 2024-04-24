// #include <stdio.h>
// #include <conio.h>
#include "basic.h"

void main () {
	// int i is a Variable
	// &i is an Address of int i
	greet();
    bool isUser = true;
	int i;
    
	// new_i is a Pointer
	// Similarly &new_i is an Address of int new_i
	int *new_i = &i;
	int *ptr2;
	
	// From below code it can be clearly seen, that booth new_i pointer and &i are same
    printf("The Value of int i is %d \n", *new_i);
    printf("The Value of int i is %d \n", i);
    printf("The Address of int i is %d \n", &i);
    printf("The Address of int i is %d \n", new_i);
    printf("%d \n", &new_i);
}