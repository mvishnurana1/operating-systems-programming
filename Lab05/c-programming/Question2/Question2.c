#include <stdio.h>

struct Student {
    char *name; 
    int id; 
    char enroll; 
}; 

struct Student john; 

void printStruct(struct Student p){
    printf("name is %s \n", p.name); 
    printf("  id is %d \n", p.id); 
    printf("enroll  %c \n", p.enroll); 
}

int main() {
    john.name = "John Cena"; 
    john.id = 32879349; 
    john.enroll = 'D';

    printStruct(john); 
    return 0; 
}