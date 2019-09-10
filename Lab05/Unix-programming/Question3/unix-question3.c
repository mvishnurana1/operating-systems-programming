#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>

int main(){
    pid_t pid; 

    pid = fork(); 

    if(pid > 0){
        wait((int*)0);
        printf("The parent terminated\n");
        exit(0); 
    }
    else 
    if(pid == 0) {
        printf("The child has terminated!\n"); 
        //exit(0);   
    }

    return 0; 
}
