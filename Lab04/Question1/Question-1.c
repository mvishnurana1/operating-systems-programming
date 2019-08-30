#include <stdio.h>

int main() {
	int ai[10]; 
	int *pi; 
	int i; 

	for (i = 0; i<10; i++) 	{
		ai[i] = i + 100;
	} 
	
	pi = &ai[0]; 

	for (i = 0; i < 10; i++, pi++) {
		printf("a[%d] = %d\n", i, *pi); 
	}

	printf("Hello World!\n"); 
	return 0;  
}