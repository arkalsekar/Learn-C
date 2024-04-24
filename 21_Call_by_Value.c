#include <stdio.h>
#include <conio.h>

int callByValue(int a, int b) {
    // Trying to Alter the Variables
    int temp = a;
    b = temp;
    a = b;
    return 0;
}

int callByReference(int *a, int *b) {
    // Trying to Alter the Variables
    int temp = *b;
    *b = *a;
    *a = temp;
    return 0;
}


int main()
{
    int a, b;
    a = 10;
    b = 20;
    printf("Before Calling Call by Value Function \n");
    printf("Value of int a is %d \n", a);
    printf("Value of int b is %d \n", b);

    // This will alter variables of within it self.
    // main / global varibles will not be affected
    callByValue(a, b);

    printf("After Calling Call by Value Function \n");
    printf("Value of int a is %d \n", a);
    printf("Value of int b is %d \n", b);

    // Since we gave the Address of the variable.
    // Hence variable in the main / global will also be affected
    callByReference(&a, &b);

    printf("After Calling Call by Reference Function \n");
    printf("Value of int a is %d \n", a);
    printf("Value of int b is %d \n", b);

    return 0;
}
