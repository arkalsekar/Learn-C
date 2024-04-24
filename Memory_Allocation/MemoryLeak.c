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
    ptr = (int *)malloc(5 * sizeof(int));

    for (int i = 0; i < 5; i++)
    {
        printf("The Value at index %d is %d \n", i, ptr[i]);
    }
    

    printf("%d\n", sizeof(int));
    printf("%d\n", sizeof(char));
    printf("%d\n", sizeof(float));
    return 0;
}