#include <stdio.h>

#define BUFFSIZE 128

int main() {
    int date; 
    char month[BUFFSIZE]; 
    int year; 

    char output[BUFFSIZE]; 

    printf("Please enter the date in the form of date-short_month-year, ");
    printf("such as 08-Aug-2009, where a month is written in the exactly three letters: \n");
    scanf("%d-%3s-%d", &date, month, &year);

    sprintf(output, "you entered: %d-%3s-%d.\n", date, month, year); 
    printf("%s \n", output); 

    return 0; 
}