#include <stdio.h>
#include <stdlib.h>

struct Student {
    char *name; 
    int id; 
    char enroll; 
}; 

struct Student john; 

void getStudent(struct Student *s) {

    printf("Type the name of the student: \n");
    s->name = malloc(100);   // assume name has less than 100 letters 
    fgets(s->name, 100, stdin);

    printf("Type the student number: \n");
    scanf("%d", &(s->id));

    printf("Type the student enrollment option (D or X): \n");
    scanf("%c", &(s->enroll)); // watch out for a bug here!

    free(s->name); 
    //free(s->enroll); 
    return; 
}

int main() {
    printf("Hello, I am awesome!\n"); 
    getStudent(&john); 
    return 0; 
}