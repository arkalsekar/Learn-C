#include <stdio.h>
#include <conio.h>

// We have loops like
// while loop
// do while loop
// for loop


int main () {
	int arr[5]= {1, 2, 3, 4 ,5};
	int n = sizeof(arr) / sizeof(int);
	
	// printing array elements using for loop
	for (int i = 0; i < n; i++){
		printf("%d \t \n", arr[i]);
	}
	
	int j = 0;
	// printing arrray elements using while loop
	while (j < n) 
	{ 
		printf("%d \t \n", arr[j]);
		j++;
	}
	
	// Printing an Array using do while loop
	int k = 0;
	do {
		printf("%d \t \n", arr[k]);
		k++;
	}
	while (k < n);
	
	
	return 0;
}