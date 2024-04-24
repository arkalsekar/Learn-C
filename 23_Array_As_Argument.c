#include <stdio.h>
#include <conio.h>

int printArr(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("The Value at %d is %d \n", i, arr[i]);
    }
    return 0;
}

int updateArr(int arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        printf("The Value at %d is %d \n", i, arr[i] + 10);
    }
    return 0;
}

int updateArrPtr(int *arr[], int n) 
{
    for (int i = 0; i < n; i++)
    {
        int updated_element = *arr[i] + 10;
        printf("The Value at %d is %d \n", i, updated_element);
    }
    return 0;
}

int main () {
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptrarr = arr;
    
    updateArr(arr, 5);
    printArr(arr, 5);

    updateArrPtr(ptrarr, 5);
    printArr(arr, 5);
    

    
    return 0;
}