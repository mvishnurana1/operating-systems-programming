#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NUM_TOKENS 100
#define tokenSeparators " \t\n"

int tokenise(char line[], char *token[]);


int tokenise(char line[], char *token[]) {
	char *tk;
	int i=0;

		tk = strtok(line, tokenSeparators);
		token[i] = tk;
	
	while (tk != NULL) {
		++i;
  
        if(i>=MAX_NUM_TOKENS) {
            i = -1;
            break;
        }
    
		tk = strtok(NULL, tokenSeparators);		
		token[i] = tk;
	}

	return i;
}
