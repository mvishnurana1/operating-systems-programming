#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char *argv[]){
    int inFile; 
    int n_char = 0; 
    char buffer[1024]; 

    inFile = open("foo", O_RDONLY);
    if(inFile == -1){
        printf("NOT FOUND!");
        exit(1);  
    }

    while((n_char = read(inFile, buffer, 1024)) != 0){
        n_char = write(1, buffer, n_char); 
    } 

    close(inFile);

    return 0;  
}