#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/wait.h>
#include <unistd.h>

void setflag(int signo){
	printf("Alarm expired ");
}

void childflag (int signo){
    printf("Child expired !");
}

void catcher(int signo){
	printf("Signal no %d is caught \n", signo);
}

int main(int argc, char *argv[]){

	int secs;
	pid_t pid;

	if(argc < 2){	
		fprintf(stderr, "Usage: %s #minutes message\n", argv[0]);
		exit(1); 
	}

 	if ((secs = atoi(argv[1])*60) <= 0){
		fprintf(stderr, "%s: invalid time\n", argv[0]); 
	}


    pid = fork();  
    if (pid < 0){
        perror("can't create process");
        exit(3);
    }else 
    if (pid>0) { 
        
        signal(SIGALRM, setflag);
        signal(SIGCHLD, childflag);
        signal(SIGINT, catcher);
        printf("Process pid=%d\n", pid);
        alarm(secs);

        for(int i=0; i< 20; i++){
            printf("loooping ... \n");
            fflush(stdout);
            sleep(1);
        }

	}else
    if (pid == 0) 
    {
        
        printf("Child created \n");
        sleep(10);
        exit(0);
        perror("child creation failed");
    }
		
	printf("End of program ");

	exit(0);
}

