#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <sys/stat.h>


int daemon_init(void) {

    pid_t pid;
    
    if ( (pid = fork() ) < 0) {
        return (-1);
    } 
    else if (pid != 0) {
        printf("server pid=%d\n", pid);
        exit(0);
    }
    /* child continues */
    setsid(); /* become session leader */
    chdir("/"); /* change current directory */
    umask(0); /* clear umask */
    return (0);
} 

int main()
{
    FILE *log;
    pid_t pid;
    // create a log file
    log = fopen(flockfile, "w+");

    if (!log) {
        fprintf(stderr, "cannot create log file %s\n", flockfile);
        exit(1);
    }
    
    // turn the process into a daemon
    daemon_init();

    // log daemon pid
    pid = getpid();
    fprintf(log, "My pid is %d\n", pid);
    fflush(log);

    while (1) {
        sleep(10);
        fprintf(log, "I have nothing to do\n"); 
        fflush(log);
    }
}