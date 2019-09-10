#include <stdio.h>

struct Student {
    char *name; 
    int id; 
    char enroll; 
}; 

struct Student john; 

int main(){
    john.name = "John verges"; 
    john.id = 1516498489; 
    john.enroll = 'D';

    printf("Student name is %s \n", john.name); 
    printf("Student ID   is %d \n", john.id);
    printf("Student enroll  %c \n", john.enroll);  
    return 0; 
}