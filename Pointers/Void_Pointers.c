#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int sum (int a, int b) {
	return a + b;
} 

int mul(int *a, int *b) {
	int tempA = *a + 1;
	int tempB = *b + 1;
	printf("tempA is %d \n", tempA);
	printf("tempB is %d \n", tempB);
	printf("mul is %d \n", tempA * tempB);
	return tempA * tempB;
}

int main () {
	char str[20] = "ABCBA";
	char *ptrstr = str;
	
	for (int i = 0; str[i] != '\0'; i++) {
	printf("Char at int i is %c \n", str[i]);
	// printf("Char at %d is %c \n", i, str[i]); 
	};
	
	return 0;
}