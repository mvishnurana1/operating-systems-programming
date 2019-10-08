#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token.h"

#define BUFFERSIZE 1096

int main()
{
   int n;
   char buffer[BUFFERSIZE];
   int number =0;	

	printf("%%");
    while(number != 1){  
    printf("Enter any message:");
    fgets(buffer, BUFFERSIZE, stdin);

    n = strlen(buffer);
    
    if(buffer[n-1] == '\n'){	
        buffer[n-1] = '\0';        	
    }

    if(buffer[0] == 'e'){	
        if(buffer[1] == 'x'){
            if(buffer[2] == 'i'){
                if(buffer[3] == 't'){
                    number =1;
                }
            }
        }			
    }   
    else
    {
        printf("%s\n", buffer);
    }
  }
   return 0;
}

