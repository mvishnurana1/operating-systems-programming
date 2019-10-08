#include <string.h>
#include "question2.h"

int separator(char *token)
{
    
    int i=0;
    char *commandSeparators[] = {pipeSep, conSep, seqSep, NULL};

    while (commandSeparators[i] != NULL){
        if (strcmp(commandSeparators[i], token) == 0){
            return 1; 
        } 
        ++i;
    }

    return 0;
}


void fillCommandStructure(Command *cp, int first, int last, char *sep){
     cp->first = first; 
     cp->last = last - 1;
     cp->sep = sep; 
}


int separateCommands(char *token[], Command command[]){
    
     int i;
     int nTokens;

     i = 0;
     while (token[i] != NULL) ++i; 
     nTokens = i;

     if (nTokens == 0) 
          return 0;

     if (separator(token[0]))
          return -3;

     if (!separator(token[nTokens-1])) 
     {
          token[nTokens] = seqSep;
          ++nTokens;
     }

     int first=0;   
     int last;      
     char *sep;     
     int c = 0;         

     for(i=0; i<nTokens; ++i){
	     last = i;

	     if(separator(token[i])) {
               sep = token[i];
               if(first==last) 
               return -2;

               fillCommandStructure(&(command[c]), first, last, sep);
               ++c;

               first = i+1; 
	     }
     }
 

    	if (strcmp(token[last], pipeSep) == 0) { 
          return -4; 
     } 

     int nCommands = c;
     return nCommands; 
}


