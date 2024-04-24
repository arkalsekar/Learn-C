#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main () {
    // Declaring a Pointer
    int *ptr;
    int req_mem;
    int isTrue = 1;

    // Taking the input of the size of the Array
    printf("Enter the Size of the Array you Want ?? \n");
    scanf("%d", &req_mem);

    // Asking whether user wants calloc or a malloc Memory
    printf("Do you want memory to be created using Calloc ?? \n");
    scanf("%d", &isTrue);

    if (isTrue == 1)
    {
        printf("Calloc");
    }

    else if (isTrue == 0)
    {
        printf("Malloc");
    }
    

    // Creating a Dynamic Array of the Required Size
    // ptr = (int *)malloc(req_mem * sizeof(int));

    return 0;
}