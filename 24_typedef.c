#include <stdio.h>
#include <string.h>

/*
typedef is basically used as an Alias or As an Another name or short name for an existing variable.
*/
typedef int integer;

typedef int* intPtr;

typedef struct Book
{
    int id;
    char class;
    char name[20];
    char author[20];
} sB; 


int main () {
    // Constructing a Pointer using our own alias
    intPtr a, b;
    integer c = 100;

    // Creating a Structure using our own Alias
    sB life, die;
    
    life.id = 1;
    life.class = 'A';
    strcpy(life.name, "Life");
    strcpy(life.author, "Abdul Rehman");

    a = &c;
    b = &c;

    printf("The value of c is %d \n", c);
    printf("The value of a is %d \n", *a);
    printf("The value of b is %d \n", *b);

    printf("The author of the Book %s is %s and the book is of class %c \n", life.name, life.author, life.class);
    printf("The author of the Book %s is %s and the book is of class %c \n" , die.name, die.author, die.class);
    return 0;
}