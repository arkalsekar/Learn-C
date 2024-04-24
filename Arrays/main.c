// Learning Arrays in C
#include <stdio.h>
#include <conio.h>

int main () {
    // Creating an Array
    int data[4] = {};

    // Inserting Data and Updating Data inside an Array
    data[0] = 1;
    data[1] = 2;
    data[2] = 3;
    data[3] = 4;

    // Accessing Element from an Array
    printf("%d \n", data[0]);
    printf("%d \n", data[1]);
    printf("%d \n", data[2]);
    printf("%d \n", data[3]);

    // Accessing Pointers of Elements from an Array
    printf("%p \n", data[0]);
    printf("%p \n", data[1]);
    printf("%p \n", data[2]);
    printf("%p \n", data[3]);

    return 0;
}