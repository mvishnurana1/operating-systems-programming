#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    
	int i;
	printf("There are %d command line arguments.\n", argc);
	printf("They are:\n");

	for (i = 0; i < argc; ++i)
	{
		printf("Argument %d is: %s\n", i, argv[i]);
	}
	
    return 0; 
}