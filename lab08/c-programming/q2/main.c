#include <stdio.h>
#include "question2.h"
#include <stdlib.h>
#include <string.h>

int main(){

	Command cmdline[256];
	char *token[]= {pipeSep, conSep, seqSep, NULL};
	int tk, exit =0;

	while(strcmp(cmdline->stdin_file, "exit") !=0){

		printf("%%");
		//scanf("%c", cmdline);
		fgets(cmdline->stdin_file, sizeof(cmdline), stdin);
		tk = separateCommands(token,cmdline);
		
		printf("count of tokens : %d", tk);

	}

	printf("Thanks for using the program !");
	return 0;
}
