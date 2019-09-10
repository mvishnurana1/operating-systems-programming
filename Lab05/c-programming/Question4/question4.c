#include <stdio.h>

int square(int n){
    return n * n; 
}

int main(){
    
    int (*fp)(int);

    fp = square; 

    printf("square of 10 = %d\n", square(10));
    printf("Square of 10 = %d\n", (fp(10))); 
    
    return 0;  
}