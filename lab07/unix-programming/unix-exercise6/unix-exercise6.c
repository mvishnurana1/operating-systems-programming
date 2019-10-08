#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#define BUF_SIZE 200
 
int main() {

	int fd, fd2;
	int rt;

		fd= open ("descriptor1.txt", O_WRONLY | O_CREAT,0766);

			if (fd <0)
			{
				  perror ("could not open apple file");
			          return 2;
			}

		fd2= open ("descriptor2.txt", O_WRONLY | O_CREAT,0766);

				rt = dup2(fd,0);

			if(rt<0)
			{
    				perror ("could not open the descriptor");
            			return 2;
			}

			rt = dup2(fd2,1);

			if(rt<0)
			{
    				perror ("could not open descriptor");
            			return 2;
			}

		printf("A friendly message\n");

	close(fd);
	close(fd2);
	
	return 0;
}
