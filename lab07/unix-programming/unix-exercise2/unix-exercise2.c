#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <errno.h>
#include <sys/types.h>
#include <unistd.h>
 
#define BUF_SIZE 200
 
int main() {
 
    int input_fd, output_fd;    
    ssize_t ret_in, ret_out;  
    char buffer[BUF_SIZE]; 
 

    input_fd = open ("foo.txt", O_RDONLY);
    if (input_fd == -1) {
            perror ("could not open apple file");
            return 2;
    }
 
   // Create output file descriptor 
    output_fd = open("./foo2.txt", O_RDWR | O_CREAT);
    if(output_fd == -1){
        perror("could not open pinaple file");
        return 3;
    }
 

    while((ret_in = read (input_fd, &buffer, BUF_SIZE)) > 0){
            ret_out = write (output_fd, &buffer, (ssize_t) ret_in);
            if(ret_out != ret_in){
                /* Write error */
                perror("could not write");
                return 4;
            }
    }

    close(input_fd);
    close(output_fd);
 
    return (EXIT_SUCCESS);
}
