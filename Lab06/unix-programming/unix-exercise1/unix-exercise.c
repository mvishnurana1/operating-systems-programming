#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    pid_t pid; 
    
    fork(); 
    fork(); 
    printf("process pid = %d & ppid = %d\n", pid, getppid()); 
    sleep(30); 
//    sleep(100);  

    return 0; 
}