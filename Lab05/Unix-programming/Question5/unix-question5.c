#include <stdio.h> 
#include <stdlib.h> 
#include <unistd.h> 
#include <sys/types.h> 
#include <sys/wait.h> 
  
int main(void) 
{ 
    pid_t pid = fork(); 
      
    if ( pid == 0 ) 
    { 
       execl("/bin/sh", "bin/sh", "-c", "./nopath", "NULL"); 
    } 
  
    int status; 
      
    waitpid(pid, &status, 0); 
  
    if ( WIFEXITED(status) ) 
    { 
        int exit_status = WEXITSTATUS(status);         
        printf("Exit status of the child was %d\n",  
                                     exit_status); 
    } 
    return 0; 
} 