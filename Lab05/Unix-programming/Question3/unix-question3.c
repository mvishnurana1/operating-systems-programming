#include <stdio.h>
#include <stdlib.h>
#include <error.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
    pid_t pid; 

    pid = fork(); 

    if(pid > 0){
        wait((int*)0);
        printf("Is completed\n");
        exit(0); 
    }

    if(pid == 0) {
        execl("/bin/ls", "ls", "-l", (char*)0);
        perror("execl failed");
        exit(0);   
    }

    perror("fork failed!"); 

    return 0; 
}