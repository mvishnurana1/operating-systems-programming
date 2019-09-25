#include <stdio.h>

struct CommandStructure {
    int first; 
    int last; 
    char* separator;         
};  

typedef struct CommandStructure Command; 

int separateCommands(char *tokens[], Command command[]); 

int main() {
    
    return 0; 
}