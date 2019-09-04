#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    pid_t pid; 

    pid = fork(); 

    if(pid == 0){
        printf("I'll be waiting for 2 seconds...\n");
        sleep(2); 
        printf("I am executed...\n"); 
    //  exit(0); 
    } else {
        printf("I am the parent\n"); 
    }

    return 0; 
}