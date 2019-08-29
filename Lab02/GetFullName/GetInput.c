#include <stdio.h>
#include <string.h>

#define BUFSIZE 128 

int main() {
	char name[BUFSIZE]; 
	printf("Please enter your name: \n");
	fgets(name, BUFSIZE, stdin); 

	printf("Name: %s \n", name); 

	int x = strlen(name) - 1; 
	printf("%d\n", x);
	return 0; 
}