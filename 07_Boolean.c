// Necessary Import 
// Iske Bagair true false use nahi kar payenge
#include <stdbool.h>
#include <stdio.h>

int main () {
    bool isUser = true;
    int userAge;
    bool isValidAge;

    printf("Enter your Age \n");
    scanf("%d", &userAge);   

    if (userAge > 18) 
    {
        printf("Valid User Age");
        isValidAge = true;
    } 
    else if (userAge < 18) 
    {
        printf("Not a Valid Age");
        isValidAge = false;
    }

    printf("%d", isValidAge);
    return isValidAge;
}
