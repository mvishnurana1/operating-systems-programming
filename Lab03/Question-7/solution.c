#include <stdio.h>

#define BUF_SIZE 128

int main() {

    char *date_str = "8-Aug-2006"; 
    int date; 
    char month[BUF_SIZE]; 
    int year; 

    sscanf(date_str, "%d-%3s-%d", &date, month, &year); 
    printf("Date: %s %d, %d\n", month, date, year); 
    return 0; 
}