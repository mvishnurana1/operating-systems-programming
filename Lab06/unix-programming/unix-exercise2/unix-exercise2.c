#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int getNumber(){
    int number; 
    printf("Please enter child program number?\n");
    scanf("%d%*c", &number);
    return number;  
}

int main(){

    pid_t pid; 
    int n = getNumber(); 

    for(int i = 0; i < n; i++){
        pid = fork(); 

        if(pid == 0){
            printf("child no. %d, pid = %d & ppid = %d\n",i, pid, getppid()); 
            sleep(i * 5);
            exit(0);  
        }
    }

    return 0;  
}