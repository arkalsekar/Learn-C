// Variable Declaration in C
#include <stdio.h>

int main() {
    int age;
    age = 18;
    char grade = 'D';
    float years = 19.5;
    char name[] = "Abdul Rehman Kalsekar";
    const char myName[] = "Abdul Rehman Kalsekar";

    // Const cannot be done like this 
    // myName[] = "Abdul";

    printf("%d \n", age);
    printf("%f \n", years);
    printf("%c \n", grade);
    printf("%s \n", name);
    printf("%s \n", myName);
    return 0;
}