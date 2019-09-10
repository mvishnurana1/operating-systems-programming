#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){

    pid_t pid; 
    
    fork(); 
    fork(); 
    printf("my pid = %d and my ppid = %d\n", pid, getppid());
    sleep(100);  

//    char *p = getenv("USER");
//    if(p==NULL) return EXIT_FAILURE; 
//    printf("usr name = %s\n", p);  
    return 0; 
}