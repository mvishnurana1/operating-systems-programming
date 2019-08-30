#include <stdio.h>
#include <stdlib.h>

int *getArray(int arraySize) {

	int *array; 

	int i;

	array = malloc(sizeof(int) * arraySize);

	for(i = 0; i<arraySize; i++) {
		array[i] += i + 10; 
	}

	return array; 
}

int main(){
	int *pi; 
	int arrayLength, i; 

	printf("Please enter the number of elements in the array \n"); 
	scanf("%d", &arrayLength); 

	printf("length passed :%d \n", arrayLength); 


	pi = getArray(arrayLength); 

	printf("Now printing Pi! \n");

	for(i = 0; i < arrayLength; i++) {
		printf("%d\n", pi[i]);
	}

	free(pi);
	return 0; 
}