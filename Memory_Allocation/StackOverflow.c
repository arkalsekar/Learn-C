#include <stdio.h>
#include <string.h>

int recursion() {
    for (int i = 0; i < 2; i++)
    {
        recursion();
        printf("Calling Recursion for  %d time \n ", i);
    }
    
    return 0;
}

int main () {
    recursion();
    return 0;
}