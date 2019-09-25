#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include <string.h>

int main(int argc, char *argv[]){

    if(argc > 1){

        pid_t pid[argc]; 
        char *commandName; 
        int status;         

        for(int i = 1 ; i < argc; i++){
            pid[i-1] = fork(); 

            if(pid[i-1] < 0){
                perror("fork unsuccessful ");
                exit(1);  
            } else {
                if(pid[i-1] == 0){
                    commandName = strchr(argv[i], '/'); 

                    if(strcmp(commandName,"bye") == 0){
                        break; 
                    }
                    else {
                        execl(argv[i], commandName, (char*)0);
                        perror("execl failed...\n");
                        exit(1);
                    }
                }
            }

            printf("%s \n", argv[i]); 

            if(pid[i-1] > 0) {
                wait((int*)0);
            }
            
        }
    }

    return 0;  
}