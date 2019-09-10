#include <stdio.h>

#define BUF_SIZE 128

int main() {

    char *fname = "foo3";  
    FILE *fstr; 
    int date; 
    char month[BUF_SIZE]; 
    int year; 

    // fstr = fopen(fname, "w+"); 
    // if(fstr == NULL) {
    //     fprintf(stderr, "Cannot open file %s... \n", fname); 
    //     return 0; 
    // }

    // fprintf(fstr, "08-Aug-1994", &date, month, &year, fname); 

    // Reading the file!

    fstr = fopen(fname, "r"); 

    if (fstr == NULL) {
        fprintf(stderr, "Cannot open file %s, exit... \n", fname);
        return 0;  
    }

    fscanf(fstr, "%d-%3s-%d", &date, month, &year); 
    printf("date = %d, month = %s, year = %d\n", date, month, year);

    fclose(fstr); 
    return 0;  
}