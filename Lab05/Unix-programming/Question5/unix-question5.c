#include <stdio.h> 
#include <stdlib.h> 
#include <sys/wait.h>
#include <unistd.h> 
  
int main(void) 
{ 
    int pid;
    pid = fork(); 
    int status; 

    if(pid == 0){
        wait((int*)0);
        printf("parent pid = %d ppid = %d\n", pid, getppid());
    }
    else {
        int exit_status = WEXITSTATUS(status);
        printf("child pid  = %d\n", pid); 
        printf("child ppid = %d\n", getppid());          
        printf("child exit status = %d\n", exit_status); 
    }

    return 0; 
}