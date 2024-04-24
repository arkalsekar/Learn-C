#include <stdio.h>
#include <conio.h>
#include <string.h>

// This is a new Structure
// A Structure is a user defined data type

struct Student {
	char name[39];
	int class;
	char grade;
};

int main() {
	
	struct Student abdul, rohan, ayesha;
	strcpy(abdul.name, "Abdul Rehman");
	abdul.class = 13;
	abdul.grade = 'A';
	
	printf("%s \n", abdul.name); 
	printf("%d \n", abdul.class); 
	printf("%c \n", abdul.grade); 
	return 0;
}