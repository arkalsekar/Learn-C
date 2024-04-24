#include <stdio.h>
#include <conio.h>

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int *ptrarr = arr;
    
    // Below all three are same 
    printf("%d \n", &arr);
    printf("%d \n", &arr[0]);
    printf("%d \n", ptrarr);
    
    printf("%d \n", &arr[1]);
    printf("%d \n", ptrarr + 1);

    return 0;
}