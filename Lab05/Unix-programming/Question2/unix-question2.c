#include<stdio.h>
#include<unistd.h>
int main(){
    pid_t pid; 

    pid = fork(); // creating a child prcess by duplicating itself

    if(pid == 0){
        printf("I am a child process %d \n", getpid()); 
    } else {
        printf("I am a parent process %d \n", getpid());
    }

    return 0;  
}