#include <stdio.h>
#include <string.h>

#define BUF_SIZE 256 

int fun() {
    char buffer[BUF_SIZE]; 
    int a = 10, b = 20, c;
    c = a + b; 
    sprintf(buffer, "Sum of %d and %d is %d", a, b, c);

    printf("%s \n", buffer); 
    return 0;  
}

int main() {

    fun(); 
    int day = 8; 
    char *month = "August"; 
    int year = 2006; 
    char long_date[BUF_SIZE];

    sprintf(long_date, "Today is %04d %s %d. \n", day, month, year);     
    printf("%s\n", long_date); 
    return 0;  
}
