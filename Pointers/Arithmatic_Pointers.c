#include <stdio.h>
#include <conio.h>

int main(int argc, char const *argv[])
{
    int a = 1;
    int *ptra = &a;
    
    printf("%d \n", ptra);
    printf("%d \n", *ptra);
    
    printf("%d \n", *ptra);
    return 0;
}