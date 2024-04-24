#include <stdio.h>
#include <stdlib.h>

/*
Four main Functions for Dynamic Memory Allocation in the Heap

malloc
calloc
realloc
free

*/

int main()
{
    int *ptr;
    ptr = (int *) calloc(5, sizeof(int));

    
    // ptr[0] = 1;
    // ptr[2] = 1;
    // ptr[1] = 1;
    // ptr[3] = 1;
    // ptr[4] = 1;

    for (int i = 0; i < 5; i++)
    {
        printf("The Value at index %d is %d \n", i, ptr[i]);
    }
    

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(float));
    return 0;
}