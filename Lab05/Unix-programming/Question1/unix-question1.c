#include <stdio.h>
#include <unistd.h>

int main(){
   pid_t pid; 
    
   pid = fork();

   if(pid == 0){
        printf("child process pid = %d\n", pid);
   }  
   else {
        printf("parent process pid = %d\n", pid); 
   }

   return 0;  
}