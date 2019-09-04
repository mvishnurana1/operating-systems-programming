#include <stdio.h>
#include <unistd.h>

int main(){
   pid_t pid; 
    
   printf("Just one process so far, call fork...\n");
   pid = fork();

   if(pid == 0){
        printf("I am a child process. My pid is %d\n", pid);
   }  
   else {
        printf("I am a parent process. My pid is %d\n", pid); 
   }

   return 0;  
}
