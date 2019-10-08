#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

void catcher(int signo) {
	printf("Signal no %d is caught \n", signo);
	sleep (4);
	printf("Signal %d returns\n", signo);
}

int main(){

	int i;

	struct sigaction act;

    act.sa_flags = 0;
    act.sa_handler = catcher;
    
    sigfillset( & (act.sa_mask) ); 

    if (sigaction(SIGINT, &act, NULL) != 0) {  
        perror("sigaction failed"); 
        exit(1);
    }

    if (sigaction(SIGTSTP, &act, NULL) != 0) {  
        perror("sigaction failed"); 
        exit(1);
    }

    for(int i =0; i< 5; i++) {
        printf("Sleep call %d \n", i);
        sleep(10);
    }
    
	printf("Exiting Sleep \n");

	exit(0);
}

