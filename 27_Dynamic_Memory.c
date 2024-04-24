#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

/*
Four main Functions for Dynamic Memory Allocation in the Heap

malloc stands for Memory Allocation
calloc stands for Contiginous Allocation
realloc stands for Re Allocation
free stands for Free all the Allocation

*/

void printArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("The Value at %d is %d \n", i, arr[i]);
    }
}

int main()
{
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
        // Creating a Dynamic Array of the Required Size
        ptr = (int *) calloc(req_mem, sizeof(int));
        printf("Memory Created using Calloc \n");
    }

    else if (isTrue == 0)
    {
        // Creating a Dynamic Array of the Required Size
        ptr = (int *)malloc(req_mem * sizeof(int));
        printf("Memory Created using Malloc \n");
    }


    // Filling the Array with values
    for (int i = 0; i < req_mem; i++)
    {
        printf("Enter Value at index %d \n", i);
        scanf("%d", &ptr[i]);
    }

    // Printing the Array
    printArr(ptr, req_mem);

    // Reallocating a Memory
    printf("Enter the New Array Size if you want \n");
    scanf("%d", &req_mem);

    // Memory Reallocated
    ptr = (int *) realloc(ptr, req_mem * sizeof(int));

    // Filling the Memory
    for (int i = 0; i < req_mem; i++)
    {
        printf("Enter Value at index %d \n", i);
        scanf("%d", &ptr[i]);
    }

    // Printing the New Array
    printArr(ptr, req_mem);
    

    // At Last Freeing the Memory
    free(ptr);
    printf("Memory Freeied Successfully \n");
    return 0;
}