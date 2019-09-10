#include <stdio.h>
#include <stdlib.h>

struct Student {
    char *name; 
    int id; 
    char enroll; 
}; 

struct Student john; 

void freeStudent(struct Student *s) {
    free(s->name); 
}

void getStudent(struct Student *s) {
    printf("Type the name of the student: \n");
    s->name = malloc(100);   // assume name has less than 100 letters 
    //fgets(s->name, 100, stdin);
    scanf("%s%*c", s->name); 

    printf("Type the student number: \n");
    scanf("%d%*c", &(s->id));

    printf("Type the student enrollment option (D or X): \n");
    scanf("%c%*c", &(s->enroll)); 
}

void printStudent(struct Student *stu){
    printf("   Student name              : %s\n", (stu->name));
    printf("   Student ID                : %d\n", stu->id);
    printf("   Student enrollment status : %c\n", stu->enroll);

    // releasing the memory after printing the info to console
    freeStudent(stu); 
}

int main() {
    getStudent(&john); 
    printStudent(&john); 
    return 0; 
}