#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    pid_t pid; 

    pid = fork(); 

    if(pid == 0){
        printf("child  pid=%d ppid=%d \n", pid, getppid());
        sleep(20); 
    } else {
        printf("parent pid=%d ppid=%d \n", pid, getppid()); 
    }

    return 0; 
}