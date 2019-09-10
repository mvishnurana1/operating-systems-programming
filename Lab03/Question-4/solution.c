#include <stdio.h>

#define BUFFSIZE 128

int main() {
    int date, month, year; 
    char newBuffer[128];

    printf("Please enter the date of the form of dd/mm/yyyy\n");
    scanf("%d/%d/%d", &date, &month, &year);

    sprintf(newBuffer, "You entered: %d-%d-%d \n", date, month, year); 

    printf("%s", newBuffer); 
    return 0; 
}