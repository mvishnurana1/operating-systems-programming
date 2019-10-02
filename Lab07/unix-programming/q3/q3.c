#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>

int copy(int intFile, int newFile){
    ssize_t nread; 
    char buffer[1024];

    while((nread = read(intFile, buffer, 1024)) > 0){
        write(newFile, buffer, nread); 
    }
    printf("copy successful!\n");
     
    close(intFile);
    close(newFile); 
    return 0;  
}

int main(int argc, char *argv[]){
    int inFile; 
    int newFile; 
    int n_char = 0; 
    char buffer[1024]; 

    newFile = creat("./foo2", 0777);

    if(newFile > -1){
        printf("foo2 created!\n"); 
    }
    
    if((inFile == -1) || (newFile == -1)){
        printf("\nCould n't create the file!!!\n");
    //  newFile = creat("foo2", O_WRONLY);
        exit(0);  
    }

    while((n_char = read(inFile, buffer, 1024)) != 0) {
        n_char = read(1, buffer, n_char); 
    } 

    copy(inFile, newFile); 


    return 0;  
}