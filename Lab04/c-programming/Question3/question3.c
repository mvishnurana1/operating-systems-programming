#include <stdio.h>
#include <stdlib.h>

int main() {
	int *ai;
	int i; 
	int n; 

	n = 10; 
	ai = malloc(sizeof(int) * n); 

	for(i=0; i<10; i++) {
		ai[i] = i + 100; 
	}	

	for(i=0; i<10; i++) {
		printf("a[%d] = %d\n", i, ai[i]); 
	}

	free(ai); 
	return 0;  
}