#include <stdio.h>
#include <conio.h>

int main () {
    
    FILE *fptr;
    // Create a file
    
    fptr = fopen("test_file.html", "w");

    // Close the file
    fclose(fptr);

    return 0;

}
