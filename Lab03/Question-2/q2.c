#include <stdio.h>
#include <string.h>

#define BUFFSIZE 128

char* manipulatingFoo2() {
    static char date[BUFFSIZE] = "today's date is 08-Aug-2019"; 
    return date; 
}


int main() {
    char *fname = "foo2"; // file name 
    
    FILE *fstr; // the file handler

    fstr = fopen(fname, "w+");

    static char date[BUFFSIZE]; 

    strcpy(date, manipulatingFoo2());

    printf("%s\n", date);  

    if(fstr == NULL) {
        fprintf(stderr, "Cannot open file %s, terminating the program...\n", fname);
        return -1; 
    }     
    else {
        fprintf(fstr, "Vishnu is a bullet-train! to %s\n", fname); 
        fprintf(fstr, "%s\n", date); 
        fclose(fstr); 
    }

    return 0; 
}
