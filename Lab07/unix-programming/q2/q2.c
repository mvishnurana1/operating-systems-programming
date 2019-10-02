#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int copy(int intFile, int newFile){
    ssize_t nread; 
    char buffer[1024];

    while((nread = read(intFile, buffer, 1024)) > 0){
        write(newFile, buffer, nread); 
    }
    printf("copy successful!\n"); 
    return 0;  
}

int main(int argc, char *argv[]){
    int inFile; 
    int newFile; 
    int n_char = 0; 
    char buffer[1024]; 

    newFile = open("foo2", O_WRONLY); 
    inFile = open("foo", O_RDONLY);
    if((inFile == -1) || (newFile == -1)){
        printf("NOT FOUND!");
        exit(1);  
    }

    while((n_char = read(inFile, buffer, 1024)) != 0){
        n_char = write(1, buffer, n_char); 
    } 

    copy(inFile, newFile); 

    close(inFile);
    close(newFile); 
    return 0;  
}